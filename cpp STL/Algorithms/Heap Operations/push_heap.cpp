#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v = {5, 2, 8, 3, 1};
    std::make_heap(v.begin(), v.end());

    v.push_back(10); // Add new element
    std::push_heap(v.begin(), v.end()); // Maintain heap property

    std::cout << "Heap after push: ";
    for (int n : v) {
        std::cout << n << " ";
    }
    return 0;
}
// Output: Heap after push: 10 3 8 2 1 5
