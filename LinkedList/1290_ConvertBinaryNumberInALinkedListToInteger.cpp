#include "linkedList.h"

int Solution::getDecimalValue(ListNode* head) {
    int result = 0;
    while (head != nullptr) {
        result = (result << 1) | head->val;
        head = head->next;
    }
    return result;
}
