#include "string.h"

int gcd(int a, int b) {
    while (a != 0 && b != 0) {
        if (a > b) {
            a %= b;
        } else {
            b %= a;
        }
    }
    return a + b;
}

std::string Solution::gcdOfStrings(std::string str1, std::string str2) {
    return (str1 + str2 == str2 + str1)? 
    str1.substr(0, gcd(str1.size(), str2.size())): "";
}