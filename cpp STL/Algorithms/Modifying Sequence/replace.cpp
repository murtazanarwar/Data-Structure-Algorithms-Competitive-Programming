#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v = {1, 2, 3, 2, 4};
    std::replace(v.begin(), v.end(), 2, 9);  // Replaces 2 with 9

    for (int n : v)
        std::cout << n << " ";
    return 0;
}
// Output: 1 9 3 9 4
