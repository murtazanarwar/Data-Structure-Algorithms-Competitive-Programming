#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v = {5, 2, 8, 1, 4};

    auto it = std::partition(v.begin(), v.end(), [](int n) { return n < 5; });

    std::cout << "Partitioned elements: ";
    for (auto i = v.begin(); i != it; ++i) {
        std::cout << *i << " "; // Output: 2 1 4
    }
    std::cout << "\nOther elements: ";
    for (auto i = it; i != v.end(); ++i) {
        std::cout << *i << " "; // Output: 5 8
    }
    return 0;
}
