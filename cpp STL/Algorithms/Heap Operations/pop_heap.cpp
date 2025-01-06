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

    std::pop_heap(v.begin(), v.end()); // Move largest to the end
    v.pop_back(); // Remove the largest element

    std::cout << "Heap after pop: ";
    for (int n : v) {
        std::cout << n << " ";
    }
    return 0;
}
// Output: Heap after pop: 5 3 2 1
