#include "string.h"
#include <unordered_map>

int Solution::numJewelsInStones(std::string jewels, std::string stones) {
    int count = 0; 
    std::unordered_map<char, int> hash;

    for (int i = 0; i < stones.size(); ++i) {
        ++hash[stones[i]];          
    }

    for (int i = 0; i < jewels.size(); ++i) {
        count += hash[jewels[i]];        
    }   

    return count;
}