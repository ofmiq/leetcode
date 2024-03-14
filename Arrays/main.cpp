#include <iostream>
#include "arrays.h"

int main() {
    Solution solution;

    std::vector<std::vector<std::string>> items = {{"phone","blue","pixel"},
                                                    {"computer","silver","lenovo"},
                                                    {"phone","silver","iphone"}};
    std::string ruleKey = "color";
    std::string ruleValue = "silver";

    int result = solution.countMatches(items, ruleKey, ruleValue);

    std::cout << result << '\n';

    return 0;
}
