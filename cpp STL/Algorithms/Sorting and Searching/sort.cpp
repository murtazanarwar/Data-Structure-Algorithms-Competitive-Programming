#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v = {5, 2, 9, 1, 5, 6};
    std::sort(v.begin(), v.end());  // Sorts in ascending order

    for (int n : v)
        std::cout << n << " ";
    return 0;
}
// Output: 1 2 5 5 6 9
