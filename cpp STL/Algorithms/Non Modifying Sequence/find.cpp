#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v = {1, 2, 3, 4, 5};
    auto it = std::find(v.begin(), v.end(), 3);  // Finds the element 3

    if (it != v.end())
        std::cout << "Element found at position: " << std::distance(v.begin(), it);
    else
        std::cout << "Element not found";
    return 0;
}
// Output: Element found at position: 2
