#include <iostream>
#include <tuple> // Required for std::tuple

int main() {
    std::tuple<int, double, std::string> t(1, 2.5, "banana");
    
    std::cout << "First: " << std::get<0>(t) << ", Second: " << std::get<1>(t) << ", Third: " << std::get<2>(t) << std::endl; 
    // Output: First: 1, Second: 2.5, Third: banana
    
    return 0;
}
