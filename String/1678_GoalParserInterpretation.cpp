#include "string.h"
#include <unordered_map>

std::string Solution::interpret(std::string command) {
    int i = 0;
    std::string result = "";
    
    while (i < command.size()) {
        if (command[i] == 'G') {
            result += 'G';
            ++i;
        } else if (command[i] == '(' && command[i+1] == ')') {
            result += "o";
            i += 2;
        } else {
            result += "al";
            i += 4;
        }
    }
    
    return result;
}

/*
    std::unordered_map<std::string, std::string> map {
        {"(al)", "al"},
        {"()", "o"},
        {"G", "G"},
    };
    
    std::string temp = "";
    std::string result = "";
    
    for (char c : command) {
        temp += c;
        if (map.find(temp) != map.end()) {
            result += map[temp];
            temp = "";
        } 
    }
    
    return result;
*/