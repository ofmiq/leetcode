#include "string.h"
#include <vector>

bool Solution::checkIfPangram(std::string sentence) {
    std::vector<int> letters (26, 0);
    int count = 0;
    
    for (char& elem : sentence) {
        if (letters[elem - 'a'] == 0) {
            ++count;
            letters[elem-'a'] = 1;
        }
    }
    
    return count == 26;
}

/*
std::unordered_set<char> s(sentence.begin(), sentence.end());
return s.size() == 26;
*/