#include "string.h"
#include <unordered_set>

int Solution::uniqueMorseRepresentations(std::vector<std::string>& words) {
    std::vector<std::string> morse{
        ".-",   "-...", "-.-.", "-..",  ".",    "..-.", "--.",
        "....", "..",   ".---", "-.-",  ".-..", "--",   "-.",
        "---",  ".--.", "--.-", ".-.",  "...",  "-",    "..-",
        "...-", ".--",  "-..-", "-.--", "--.."};
    
    std::unordered_set<std::string> s;
    
    for (std::string str : words) {
        std::string temp = "";
        for (int i = 0; i < str.size(); ++i) {
            temp += morse[str[i] - 'a'];
        }
        s.insert(temp);
    }
    
    return s.size();
}