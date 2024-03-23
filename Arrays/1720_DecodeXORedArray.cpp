#include "arrays.h"

std::vector<int> Solution::decode(std::vector<int>& encoded, int first) {
    std::vector<int> result = {first};
    
    for (int i = 0; i < encoded.size(); ++i) {
        result.push_back(result[i] ^ encoded[i]);
    }
    
    return result;
}