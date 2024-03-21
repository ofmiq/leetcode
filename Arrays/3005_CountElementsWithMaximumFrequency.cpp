#include "arrays.h"
#include <unordered_map>
#include <algorithm>

int Solution::maxFrequencyElements(std::vector<int>& nums) {
    std::unordered_map<int, int> freq;
    for (int num : nums) {
        ++freq[num];
    }
    
    int maxFreq = 0;
    for (const auto& [num, count] : freq) {
        maxFreq = std::max(maxFreq, count);
    }
    
    int totalElementsWithMaxFreq = 0;
    for (const auto& [num, count] : freq) {
        if (count == maxFreq) {
            totalElementsWithMaxFreq += count;
        }
    }
    
    return totalElementsWithMaxFreq;
}