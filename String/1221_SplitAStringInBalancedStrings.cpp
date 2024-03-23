#include "string.h"

int Solution::balancedStringSplit(std::string s) {
        int r = 0;
        int l = 0;

        int count = 0;

        for (char i : s) {
            if (i == 'R') {
                ++r;
            } 
            else {
                ++l;
            }
            if (r == l) {
                ++count;
            }
        }
        
        return count;
}