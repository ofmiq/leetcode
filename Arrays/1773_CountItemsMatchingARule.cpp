#include "arrays.h"

int Solution::countMatches(std::vector<std::vector<std::string>>& items, 
                 std::string& ruleKey, std::string& ruleValue) 
{
    int count = 0;
    int index = (ruleKey == "type") ? 0 : (ruleKey == "color") ? 1 : 2;

    for (int i = 0; i < items.size(); ++i) {
        if (items[i][index] == ruleValue) {
            ++count;
        }
    }

    return count;
}