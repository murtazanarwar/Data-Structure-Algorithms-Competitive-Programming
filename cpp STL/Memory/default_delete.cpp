#include <iostream>
#include <memory> // Required for std::default_delete

int main() {
    std::unique_ptr<int, std::default_delete<int>> p(new int(30));
    
    std::cout << "Value: " << *p << std::endl; // Output: Value: 30
    
    // No need to manually delete; p will automatically clean up.
    
    return 0;
}
