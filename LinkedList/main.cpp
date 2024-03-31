#include "linkedList.h"

int main() {
    std::vector<int> v = {1, 2, 3, 4, 5};

    LinkedList list(v);
    Solution solution;
    
    bool result1 = solution.hasCycle(list.head);

    std::cout << std::boolalpha << result1 << '\n';

    list.head->next->next->next->next->next = list.head->next->next;

    bool result2 = solution.hasCycle(list.head);

    std::cout << std::boolalpha << result2 << '\n';

    ListNode* lastNode = list.head;
    while (lastNode->next) {
        if (lastNode->next == list.head->next->next) {
            lastNode->next = nullptr;
            break;
        }
        lastNode = lastNode->next;
    }

    return 0;
}
