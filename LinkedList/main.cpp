#include "linkedList.h"

int main() {
    LinkedList list;
    
    for (int i = 1; i <= 5; ++i) {
        list.append(i);
    }

    Solution solution;
    
    ListNode* result = solution.middleNode(list.head);

    std::cout << result->val << '\n';

    return 0;
}
