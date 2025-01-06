#include <iostream>
#include <memory> // Required for std::allocator

int main() {
    std::allocator<int> alloc;
    
    // Allocate memory for 5 integers
    int* p = alloc.allocate(5);
    
    // Construct values in allocated memory
    for (int i = 0; i < 5; ++i) {
        alloc.construct(&p[i], i + 1);
    }
    
    std::cout << "Allocated values: ";
    for (int i = 0; i < 5; ++i) {
        std::cout << p[i] << " "; // Output: 1 2 3 4 5
    }
    std::cout << std::endl;

    // Destroy and deallocate
    for (int i = 0; i < 5; ++i) {
        alloc.destroy(&p[i]);
    }
    alloc.deallocate(p, 5);

    return 0;
}
