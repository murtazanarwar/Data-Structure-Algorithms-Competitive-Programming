#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v1 = {1, 2, 3, 4, 5};
    std::vector<int> v2 = {4, 5, 6, 7, 8};
    std::vector<int> result;

    std::set_symmetric_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), std::back_inserter(result));

    std::cout << "Symmetric Difference: ";
    for (int n : result) {
        std::cout << n << " ";
    }
    return 0;
}
// Output: Symmetric Difference: 1 2 3 6 7 8
