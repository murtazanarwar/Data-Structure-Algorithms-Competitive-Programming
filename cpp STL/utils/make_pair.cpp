#include <iostream>
#include <utility> // Required for std::make_pair

int main() {
    auto p = std::make_pair(1, "orange");
    
    std::cout << "First: " << p.first << ", Second: " << p.second << std::endl; // Output: First: 1, Second: orange
    
    return 0;
}
