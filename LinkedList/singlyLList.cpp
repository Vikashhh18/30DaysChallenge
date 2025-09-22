#include <iostream>
using namespace std;

class Node {
public:
    int value;
    Node* next;
    Node(int val) {
        value = val;
        next = NULL;
    }
};

int sizeOfll(Node* head) {
    int count = 0;
    while (head) {
        head = head->next;
        count++;
    }
    return count;
}

void insertAtHead(Node*& head, int value) {
    Node* first = new Node(value);
    first->next = head;
    head = first;
}

void insertAtTail(Node*& head, int value) {
    Node* tail = new Node(value);
    if (head == NULL) {
        head = tail;
        return;
    }
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = tail;
}

void insertAtPosition(Node*& head, int value, int pos) {
    if (pos < 0 || pos > sizeOfll(head)) return;

    if (pos == 0) {
        insertAtHead(head, value);
        return;
    }

    Node* temp = head;
    for (int i = 0; i < pos - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    Node* add = new Node(value);
    add->next = temp->next;
    temp->next = add;
}

void printLL(Node* head) {
    while (head) {
        cout << head->value << "  ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    Node* head = new Node(5);
    insertAtHead(head, 3);
    insertAtTail(head, 9);
    insertAtPosition(head, 7, 2);
    insertAtPosition(head, 1, 0);

    printLL(head);
    return 0;
}
