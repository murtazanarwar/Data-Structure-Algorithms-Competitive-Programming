#include <iostream>
#include <memory> // Required for std::unique_ptr

int main() {
    std::unique_ptr<int> p1 = std::make_unique<int>(5);
    std::cout << "Value: " << *p1 << std::endl; // Output: Value: 5
    
    return 0;
}
