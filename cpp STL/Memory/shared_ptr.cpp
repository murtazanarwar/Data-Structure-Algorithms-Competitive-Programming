#include <iostream>
#include <memory> // Required for std::shared_ptr

int main() {
    std::shared_ptr<int> p1 = std::make_shared<int>(10);
    std::cout << "Value: " << *p1 << std::endl; // Output: Value: 10
    
    std::shared_ptr<int> p2 = p1; // p2 shares ownership of the same object
    std::cout << "Value from p2: " << *p2 << std::endl; // Output: Value from p2: 10
    
    return 0;
}
