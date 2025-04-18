#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v1 = {1, 2, 3, 4, 5};
    std::vector<int> v2 = {4, 5, 6, 7, 8};
    std::vector<int> result;

    std::set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), std::back_inserter(result));

    std::cout << "Union: ";
    for (int n : result) {
        std::cout << n << " ";
    }
    return 0;
}
// Output: Union: 1 2 3 4 5 6 7 8
