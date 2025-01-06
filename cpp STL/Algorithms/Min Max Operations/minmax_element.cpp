#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v = {5, 3, 8, 1, 4};
    auto minmax_it = std::minmax_element(v.begin(), v.end());
    
    std::cout << "Min element: " << *minmax_it.first << ", Max element: " << *minmax_it.second << std::endl; // Output: Min element: 1, Max element: 8
    return 0;
}
