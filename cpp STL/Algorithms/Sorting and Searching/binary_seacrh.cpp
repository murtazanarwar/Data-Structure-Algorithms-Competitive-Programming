#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v = {1, 2, 3, 4, 5};
    bool found = std::binary_search(v.begin(), v.end(), 3);  // Check if 3 is present

    std::cout << "3 found: " << (found ? "yes" : "no");
    return 0;
}
// Output: 3 found: yes
