#include "string.h"

bool Solution::isCircularSentence(const std::string& sentence) {
    if (sentence.empty()) {
        return true;
    }

    char firstChar = sentence.front();
    char lastChar = '\0';
    char prevChar = '\0';
    bool wordStarted = false;

    for (size_t i = 0; i < sentence.size(); ++i) {
        char currentChar = sentence[i];
        if (currentChar != ' ') {
            if (!wordStarted) {
                wordStarted = true;
                if (prevChar != '\0' && prevChar != currentChar) {
                    return false;
                }
            }
            prevChar = currentChar;
        } else {
            wordStarted = false;
        }
    }

    return prevChar == firstChar;
}