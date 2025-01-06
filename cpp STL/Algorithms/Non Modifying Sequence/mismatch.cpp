#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v1 = {1, 2, 3, 4, 5};
    std::vector<int> v2 = {1, 2, 0, 4, 5};

    auto result = std::mismatch(v1.begin(), v1.end(), v2.begin());

    if (result.first != v1.end()) {
        std::cout << "First mismatch found at position: "
                  << std::distance(v1.begin(), result.first) << "\n";
        std::cout << "Values: v1 = " << *result.first << ", v2 = " << *result.second << "\n";
    } else {
        std::cout << "No mismatches found.\n";
    }
    return 0;
}
// Output:
// First mismatch found at position: 2
// Values: v1 = 3, v2 = 0
