#include <iostream>
#include <vector>

int main() {
    std::vector<int> v = {1, 2, 3, 4, 5};
    
    std::cout << "Element at index 2: " << v[2] << "\n";  // Direct access
    auto it = v.begin() + 3;  // Jumping to 4th element
    std::cout << "4th element: " << *it << "\n";

    return 0;
}
// Output:
// Element at index 2: 3
// 4th element: 4
