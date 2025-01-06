#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v = {1, 2, 3, 2, 4};
    int count = std::count(v.begin(), v.end(), 2);  // Counts occurrences of 2

    std::cout << "Number of 2s: " << count;
    return 0;
}
// Output: Number of 2s: 2
