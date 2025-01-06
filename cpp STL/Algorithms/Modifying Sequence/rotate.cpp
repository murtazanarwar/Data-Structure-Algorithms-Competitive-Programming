#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v = {1, 2, 3, 4, 5, 6};

    // Rotate the vector such that the first three elements are moved to the end
    std::rotate(v.begin(), v.begin() + 5, v.end());

    std::cout << "Rotated vector: ";
    for (int n : v) {
        std::cout << n << " ";
    }
    return 0;
}
// Output: Rotated vector: 4 5 6 1 2 3
