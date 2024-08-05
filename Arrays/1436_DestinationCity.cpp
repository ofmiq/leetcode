#include "arrays.h"
#include <unordered_set>

std::string Solution::destCity(std::vector<std::vector<std::string>>& paths) {
    std::unordered_set<std::string> start_cities;
    std::string potential_dest_city;
  
    for (const auto& path : paths) {
        start_cities.insert(path[0]);
        potential_dest_city = path[1];
    }
  
    if (!start_cities.contains(potential_dest_city)) {
        return potential_dest_city;
    }
  
    for (const auto& path : paths) {
        if (!start_cities.contains(path[1])) {
            return path[1];
        }
    }
    
    return "";
}