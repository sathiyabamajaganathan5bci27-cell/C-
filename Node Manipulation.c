#include <iostream>

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

class LinkedList {
public:
    Node* head = nullptr;
    void append(int val) {
        if (!head) { head = new Node(val); return; }
        Node* temp = head;
        while (temp->next) temp = temp->next;
        temp->next = new Node(val);
    }
    ~LinkedList() {
        while (head) { Node* t = head; head = head->next; delete t; }
    }
};

int main() {
    LinkedList list; list.append(10); list.append(20);
    return 0;
}
