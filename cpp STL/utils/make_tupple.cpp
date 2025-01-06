#include <iostream>
#include <tuple> // Required for std::make_tuple

int main() {
    auto t = std::make_tuple(1, 2.5, "grape");
    
    std::cout << "First: " << std::get<0>(t) << ", Second: " << std::get<1>(t) << ", Third: " << std::get<2>(t) << std::endl; 
    // Output: First: 1, Second: 2.5, Third: grape
    
    return 0;
}
