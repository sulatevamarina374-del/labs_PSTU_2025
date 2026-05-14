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

    void clear() {
        while (size > 0) {
            popFront();
        }
    }

    ListElem* getHead() { return head; }
    ListElem* getTail() { return tail; }
};


List* createList(int size) {
    List* lst = new List;
    lst->init();
    cout << "Введите элементы списка: ";
    for (int i = 0; i < size; i++) {
        int data;
        cin >> data;
        lst->pushBack(data);
    }
    return lst;
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


void deleteByNumber(List& l, int num) {
    if (num < 1 || num > l.size) {
        cout << "Невозможно удалить элемент" << endl;
        return;
    }

    ListElem* toDelete = l.head;
    for (int i = 1; i < num; i++) {
        toDelete = toDelete->next;
    }

    if (toDelete->prev != nullptr) {
        toDelete->prev->next = toDelete->next;
    }
    else {
        l.head = toDelete->next; 
    }

    if (toDelete->next != nullptr) {
        toDelete->next->prev = toDelete->prev;
    }
    else {
        l.tail = toDelete->prev; 
    }

    delete toDelete;
    l.size--;
    cout << "Элемент с номером " << num << " удален" << endl;
}


void addElementsByNumber(List& l, int startNum, int k) {
    if (startNum < 1 || startNum > l.size + 1) {
        cout << "Невозможно добавить элемент" << endl;
        return;
    }

    ListElem* current = l.head;
    for (int i = 1; i < startNum; i++) {
        current = current->next;
    }

    for (int i = 0; i < k; i++) {
        int newData;
        cout << "Введите новый элемент " << i + 1 << ": ";
        cin >> newData;

        ListElem* newNode = new ListElem;
        newNode->data = newData;

        if (startNum == 1) {
            newNode->next = l.head;
            newNode->prev = nullptr;
            if (l.head != nullptr) {
                l.head->prev = newNode;
            }
            l.head = newNode;
            if (l.tail == nullptr) {
                l.tail = newNode;
            }
            current = newNode->next;
        }
        else if (startNum == l.size + 1) {
            newNode->next = nullptr;
            newNode->prev = l.tail;
            if (l.tail != nullptr) {
                l.tail->next = newNode;
            }
            l.tail = newNode;
            if (l.head == nullptr) {
                l.head = newNode;
            }
        }
        else {
            newNode->next = current;
            newNode->prev = current->prev;
            if (current->prev != nullptr) {
                current->prev->next = newNode;
            }
            current->prev = newNode;
        }
        l.size++;
        startNum++;
    }
    cout << "Добавлено " << k << " элементов начиная с позиции " << startNum - k << endl;
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


void destroyList(List*& l) {
    l->clear();
    delete l;
    l = nullptr;
    cout << "Список уничтожен" << endl;
}


void restoreList(List*& dest, List& source) {
    if (dest != nullptr) {
        destroyList(dest);
    }
    dest = new List;
    dest->init();
    ListElem* cur = source.head;
    while (cur != nullptr) {
        dest->pushBack(cur->data);
        cur = cur->next;
    }
    cout << "Список восстановлен из копии" << endl;
}

int main() {
    setlocale(LC_ALL, "Russian");

    int N;
    cout << "Введите длину списка: " << endl;
    cin >> N;

    int idx, num;

    List* myList = createList(N);

    cout << "Созданный список: " << endl;
    printList(*myList);

    cout << "Введите номер элемента, который Вы хотите удалить: " << endl;
    cin >> idx;
    deleteByNumber(*myList, idx);
    cout << "Список после удаления: ";
    printList(*myList);

    cout << "Введите количество элементов, которые вы хотите вставить: " << endl;
    cin >> num;
    cout << "Введите номер позиции, начиная с которой вставить: " << endl;
    cin >> idx;
    addElementsByNumber(*myList, idx, num);
    cout << "Список после добавления: ";
    printList(*myList);

    List listCopy;
    listCopy.init();
    saveToList(*myList, listCopy);

    cout << "Уничтожение списка" << endl;
    destroyList(myList);
    cout << "Печать после уничтожения: ";
    printList(*myList);

    cout << "Восстановление списка" << endl;
    restoreList(myList, listCopy);
    cout << "Список после восстановления: ";
    printList(*myList);

    cout << "Окончательное уничтожение" << endl;
    destroyList(myList);
    listCopy.clear();

    return 0;
}