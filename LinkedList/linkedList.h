#ifndef LEETCODE_LINKEDLIST_H
#define LEETCODE_LINKEDLIST_H

#include <iostream>
#include <vector>

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
    LinkedList(const std::vector<int>& vec);
    ~LinkedList();
    LinkedList(const LinkedList& other) = delete;
    LinkedList& operator=(const LinkedList& other) = delete;
    void append(int val);
    void remove(int val);
    LinkedList listFromVector(std::vector<int> v);
    void display() const;
};

class Solution {
public:
    int getDecimalValue(ListNode* head);
    ListNode* middleNode(ListNode* head);
    bool hasCycle(ListNode *head);
    ListNode* mergeNodes(ListNode* head);
    ListNode* deleteDuplicates(ListNode* head);
    ListNode* reverseList(ListNode* head);
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2);
};

#endif //LEETCODE_LINKEDLIST_H