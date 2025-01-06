#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v = {5, 2, 8, 3, 1};
    std::make_heap(v.begin(), v.end());

    std::cout << "Original Heap: ";
    for (int n : v) {
        std::cout << n << " ";
    }
    std::cout << "\n";

    std::sort_heap(v.begin(), v.end());

    std::cout << "Sorted Heap: ";
    for (int n : v) {
        std::cout << n << " ";
    }
    return 0;
}
// Output: Sorted Heap: 1 2 3 5 8
