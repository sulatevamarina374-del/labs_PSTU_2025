#include <iostream>

using namespace std;

struct ListElem {
    int data;
    ListElem* next;
    ListElem* prev;
};

struct List {
    ListElem* head;
    ListElem* tail;
    int size;

    void init() {
        head = nullptr;
        tail = nullptr;
        size = 0;
    }

    void pushBack(int data) {
        ListElem* cur = new ListElem;
        cur->data = data;
        cur->next = nullptr;
        cur->prev = tail;

        if (head == nullptr) {
            head = cur;
            tail = cur;
        }
        else {
            tail->next = cur;
            tail = cur;
        }
        size++;
    }

    void pushFront(int data) {
        ListElem* cur = new ListElem;
        cur->data = data;
        cur->next = head;
        cur->prev = nullptr;

        if (head == nullptr) {
            head = cur;
            tail = cur;
        }
        else {
            head->prev = cur;
            head = cur;
        }
        size++;
    }

    int popFront() {
        if (size == 0) return -1;

        int value = head->data;
        ListElem* tmp = head;

        head = head->next;
        if (head != nullptr) {
            head->prev = nullptr;
        }
        else {
            tail = nullptr;
        }

        size--;
        delete tmp;
        return value;
    }

    int popBack() {
        if (size == 0) return -1;

        int value = tail->data;
        ListElem* tmp = tail;

        tail = tail->prev;
        if (tail != nullptr) {
            tail->next = nullptr;
        }
        else {
            head = nullptr;
        }

        size--;
        delete tmp;
        return value;
    }

    void clear() {
        while (size > 0) {
            popFront();
        }
    }

    ListElem* getHead() { return head; }
    ListElem* getTail() { return tail; }
};


void createList(List& l, int n) {
    l.init();
    cout << "Введите элементы списка: " << endl;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        l.pushBack(x);
    }
}


void printList(List& l) {
    if (l.size == 0) {
        cout << "Список пуст" << endl;
        return;
    }

    ListElem* cur = l.head;
    while (cur != nullptr) {
        cout << cur->data << " ";
        cur = cur->next;
    }
    cout << endl;
}


void deleteFromBeginning(List& l) {
    if (l.size == 0) {
        cout << "Невозможно удалить элемент - список пуст" << endl;
        return;
    }

    int deletedValue = l.popFront();
    cout << "Удален элемент: " << deletedValue << endl;
}


void addToBeginning(List& l, int value) {
    l.pushFront(value);
    cout << "Добавлен элемент: " << value << " в начало списка" << endl;
}


void saveToList(List& source, List& dest) {
    dest.clear();
    ListElem* cur = source.head;
    while (cur != nullptr) {
        dest.pushBack(cur->data);
        cur = cur->next;
    }
    cout << "Список скопирован" << endl;
}


void destroyList(List& l) {
    l.clear();
    cout << "Список уничтожен" << endl;
}


void restoreList(List& dest, List& source) {
    dest.clear();
    ListElem* cur = source.head;
    while (cur != nullptr) {
        dest.pushBack(cur->data);
        cur = cur->next;
    }
    cout << "Список восстановлен из копии" << endl;
}

int main() {
    setlocale(LC_ALL, "Russian");

    int N;
    cout << "Введите длину списка: ";
    cin >> N;

    List myList;
    createList(myList, N);

    cout << "Созданный список: " << endl;
    printList(myList);

    cout << "Удаление элемента из начала списка " << endl;
    deleteFromBeginning(myList);
    cout << "Список после удаления: ";
    printList(myList);

    cout << "Добавление элемента в начало списка" << endl;
    int newValue;
    cout << "Введите значение для добавления в начало: " << endl;
    cin >> newValue;
    addToBeginning(myList, newValue);
    cout << "Список после добавления: " << endl;
    printList(myList);

    List listCopy;
    listCopy.init();
    saveToList(myList, listCopy);

    cout << "Уничтожение списка " << endl;
    destroyList(myList);
    cout << "Печать после уничтожения: " << endl;
    printList(myList);

    cout << "Восстановление списка из копии" << endl;
    restoreList(myList, listCopy);
    cout << "Список после восстановления: " << endl;
    printList(myList);

    cout << "Окончательное уничтожение" << endl;
    destroyList(myList);
    destroyList(listCopy);

    return 0;
}