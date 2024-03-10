#include "string.h"

std::string Solution::defangIPaddr(std::string address) {
    std::string result = "";
    for (int i = 0; i < address.size(); ++i) {
        if (address[i] == '.') {
            result += "[.]";
        } else {
            result += address[i];
        }
    }
    return result;
}