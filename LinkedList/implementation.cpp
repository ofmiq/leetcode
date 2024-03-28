#include <iostream>

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class LinkedList {
private:
    ListNode *head;

public:
    LinkedList();
    ~LinkedList();
    LinkedList(const LinkedList& other) = delete;
    LinkedList& operator=(const LinkedList& other) = delete;
    void append(int val);
    void remove(int val);
    void display();
};

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

void LinkedList::display() {
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

int main() {
    LinkedList list;

    list.append(1);
    list.append(2);
    list.append(3);

    list.display();

    list.remove(2);
    list.remove(3);
    list.remove(1);

    list.display();

    return 0;
}
