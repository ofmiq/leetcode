#include "string.h"

int Solution::lengthOfLastWord(std::string s) {
    int count = 0;
    int lastWordLength = 0;
    
    for (char elem : s) {
        if (elem == ' ') {
            if (count) {
                lastWordLength = count;
            }
            count = 0;
        } else {
            ++count;
        }
    }
    
    if (count) {
        lastWordLength = count;
    }
    
    return lastWordLength;
}