#include <iostream>
#include <utility> // Required for std::pair

int main() {
    std::pair<int, std::string> p(1, "apple");
    
    std::cout << "First: " << p.first << ", Second: " << p.second << std::endl; // Output: First: 1, Second: apple
    return 0;
}
