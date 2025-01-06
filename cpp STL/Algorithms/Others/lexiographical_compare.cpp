#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v1 = {1, 2, 3};
    std::vector<int> v2 = {1, 2, 4};

    bool result = std::lexicographical_compare(v1.begin(), v1.end(), v2.begin(), v2.end());
    
    std::cout << "v1 is less than v2: " << (result ? "true" : "false") << std::endl; // Output: v1 is less than v2: true
    return 0;
}
