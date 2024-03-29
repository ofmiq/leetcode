#ifndef LEETCODE_LINKEDLIST_H
#define LEETCODE_LINKEDLIST_H

#include <iostream>

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class LinkedList {
public:
    ListNode *head;
    
    LinkedList();
    ~LinkedList();
    LinkedList(const LinkedList& other) = delete;
    LinkedList& operator=(const LinkedList& other) = delete;
    void append(int val);
    void remove(int val);
    void display() const;
};

class Solution {
public:
    int getDecimalValue(ListNode* head);
    ListNode* middleNode(ListNode* head);
};

#endif //LEETCODE_LINKEDLIST_H