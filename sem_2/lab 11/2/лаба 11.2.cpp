#include <iostream>
using namespace std;

struct tot {
    int data;
    tot* next;
    tot* prev;

    
    tot(int val = 0, tot* nxt = nullptr, tot* prv = nullptr)
        : data(val), next(nxt), prev(prv) {
    }
};

struct list {
    tot* head; 
    tot* tail; 

    list() : head(nullptr), tail(nullptr) {}
};


void createList(list* pp, int n) {
    if (n <= 0) return;

    for (int i = 0; i < n; i++) {
        tot* newNode = new tot;
        cout << "Введите элемент " << i + 1 << ": ";
        cin >> newNode->data;
        newNode->next = nullptr;
        newNode->prev = pp->tail;

        if (pp->head == nullptr) {
            pp->head = newNode;
            pp->tail = newNode;
        }
        else {
            pp->tail->next = newNode;
            pp->tail = newNode;
        }
    }
}


void printList(list* pp) {
    if (pp->head == nullptr) {
        cout << "Список пуст" << endl;
        return;
    }

    tot* cur = pp->head;
    while (cur != nullptr) {
        cout << cur->data << " ";
        cur = cur->next;
    }
    cout << endl;
}


void deleteByKey(list* pp, int key) {
    if (pp->head == nullptr) {
        cout << "Список пуст, удаление невозможно" << endl;
        return;
    }

    tot* cur = pp->head;
    while (cur != nullptr && cur->data != key) {
        cur = cur->next;
    }

    if (cur == nullptr) {
        cout << "Элемент с ключом " << key << " не найден" << endl;
        return;
    }

    
    if (cur->prev != nullptr) {
        cur->prev->next = cur->next;
    }
    else {
        pp->head = cur->next; 
    }

    if (cur->next != nullptr) {
        cur->next->prev = cur->prev;
    }
    else {
        pp->tail = cur->prev; 
    }

    delete cur;
    cout << "Элемент с ключом " << key << " удален" << endl;
}


void insertBeforeKey(list* pp, int key, int newValue) {
    if (pp->head == nullptr) {
        cout << "Список пуст, вставка невозможна" << endl;
        return;
    }

    tot* cur = pp->head;
    while (cur != nullptr && cur->data != key) {
        cur = cur->next;
    }

    if (cur == nullptr) {
        cout << "Элемент с ключом " << key << " не найден" << endl;
        return;
    }

    tot* newNode = new tot(newValue, cur, cur->prev);

    if (cur->prev != nullptr) {
        cur->prev->next = newNode;
    }
    else {
        pp->head = newNode; 
    }
    cur->prev = newNode;

    cout << "Элемент " << newValue << " вставлен перед " << key << endl;
}

void destroyList(list* pp) {
    tot* cur = pp->head;
    while (cur != nullptr) {
        tot* next = cur->next;
        delete cur;
        cur = next;
    }
    pp->head = nullptr;
    pp->tail = nullptr;
    cout << "Список уничтожен" << endl;
}

int main() {
    setlocale(LC_ALL, "Russian");

    list myList;
    int n, key, newValue;

    cout << "Введите длину списка: " << endl;
    cin >> n;
    createList(&myList, n);

    cout << "Созданный список: " << endl;
    printList(&myList);

    cout << "Введите ключ (значение) для удаления: " << endl;
    cin >> key;
    deleteByKey(&myList, key);
    cout << "Список после удаления: " << endl;
    printList(&myList);

    cout << "Введите ключ, перед которым вставить: " << endl;
    cin >> key;
    cout << "Введите новое значение: " << endl;
    cin >> newValue;
    insertBeforeKey(&myList, key, newValue);
    cout << "Список после вставки: " << endl;
    printList(&myList);

    destroyList(&myList);

    cout << "Печать после уничтожения: " << endl;
    printList(&myList);

    return 0;
}