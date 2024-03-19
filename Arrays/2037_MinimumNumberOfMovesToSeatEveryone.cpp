#include "arrays.h"
#include <algorithm>

int Solution::minMovesToSeat(std::vector<int>& seats, std::vector<int>& students) {
    int count = 0;
    
    std::sort(seats.begin(), seats.end());
    std::sort(students.begin(), students.end());
    
    for (int i = 0; i < seats.size(); ++i) {
        count += abs(students[i] - seats[i]);
    }
    
    return count;
}