#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v = {1, 2, 4, 4, 4, 5, 6};
    
    // Find range of elements equal to 4
    auto range = std::equal_range(v.begin(), v.end(), 4);

    std::cout << "Elements equal to 4: ";
    for (auto it = range.first; it != range.second; ++it)
        std::cout << *it << " ";
    return 0;
}
// Output: Elements equal to 4: 4 4 4
