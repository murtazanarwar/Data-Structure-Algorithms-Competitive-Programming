#include <iostream>
#include <unordered_set>

int main() {
    std::unordered_set<int> us = {1, 3, 5, 3, 9};
    us.insert(7);

    for (int n : us)
        std::cout << n << " ";
    return 0;
}
// Output: Order may vary but elements are unique, e.g., 1 3 5 7 9