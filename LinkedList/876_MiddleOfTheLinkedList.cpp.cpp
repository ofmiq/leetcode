#include "linkedList.h"

ListNode* Solution::middleNode(ListNode* head) {
    if (!head) {
        return head;
    } 

    ListNode* slow = head;
    ListNode* fast = head;
    
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }
    
    return slow;
}