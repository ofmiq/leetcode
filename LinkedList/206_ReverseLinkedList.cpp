#include "linkedList.h"

ListNode* Solution::reverseList(ListNode* head) {
    ListNode* current = head;
    ListNode* temp = nullptr;

    while (current != nullptr) {
        ListNode* start = current->next;
        current->next = temp;
        temp = current;
        current = start;
    }
       
    return temp;
}