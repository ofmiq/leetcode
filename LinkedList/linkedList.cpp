#include "linkedList.h"

LinkedList::LinkedList() : head(nullptr) {}

LinkedList::~LinkedList() {
    while (head) {
        ListNode *temp = head;
        head = head->next;
        delete temp;
    }
}

void LinkedList::append(int val) {
    ListNode *newNode = new ListNode(val);
    if (!head) {
        head = newNode;
        return;
    }
    ListNode *temp = head;
    while (temp->next) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void LinkedList::remove(int val) {
    if (!head) {
        return;
    }
    if (head->val == val) {
        ListNode *temp = head;
        head = head->next;
        delete temp;
        return;
    }
    ListNode *prev = head;
    ListNode *curr = head->next;
    while (curr) {
        if (curr->val == val) {
            prev->next = curr->next;
            delete curr;
            return;
        }
        prev = curr;
        curr = curr->next;
    }
}

void LinkedList::display() const {
    if (!head) {
        std::cout << "List is empty\n";
        return;
    }
    ListNode *temp = head;
    while (temp) {
        std::cout << temp->val << " ";
        temp = temp->next;
    }
    std::cout << '\n';
}
