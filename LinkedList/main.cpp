#include "linkedList.h"

int main() {
    LinkedList list;
    list.append(1);
    list.append(0);
    list.append(1);

    Solution solution;
    
    int result = solution.getDecimalValue(list.head);

    std::cout << result << '\n';

    return 0;
}
