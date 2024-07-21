#include "string.h"

std::string Solution::capitalizeTitle(std::string title) {
    int l = title.size();
    for (int i = 0; i < l; ++i) {
        int first_index = i;
        while (i < l && title[i] != ' ') {
            title[i] = std::tolower(title[i]);
            ++i;
        }
        if (i - first_index > 2) {
            title[first_index] = std::toupper(title[first_index]);
        }
    }
    return title;
}
