#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v1 = {1, 3, 5, 7};
    std::vector<int> v2 = {2, 4, 6, 8};
    std::vector<int> result(8); // Ensure enough space for the merged result

    std::merge(v1.begin(), v1.end(), v2.begin(), v2.end(), result.begin());

    std::cout << "Merged: ";
    for (int n : result) {
        std::cout << n << " ";
    }
    return 0;
}
// Output: Merged: 1 2 3 4 5 6 7 8
