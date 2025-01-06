#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v = {5, 2, 8, 3, 1};

    std::make_heap(v.begin(), v.end());

    std::cout << "Heap: ";
    for (int n : v) {
        std::cout << n << " ";
    }
    std::cout << "\n"; // Output may not be sorted but satisfies heap property
    return 0;
}
// Output: Heap: 8 3 5 2 1
