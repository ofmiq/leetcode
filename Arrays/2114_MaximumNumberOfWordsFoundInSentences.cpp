#include "arrays.h"

int Solution::mostWordsFound(std::vector<std::string>& sentences) {
    int max = 0;
    for (int i = 0; i < sentences.size(); ++i) {
        int words = 1;
        for (int j = 0; j < sentences[i].size(); ++j) {
            if (sentences[i][j] == ' ') {
                ++words;
            }
        }
        if (max < words) {
            max = words;
        }
    }
    return max;
}