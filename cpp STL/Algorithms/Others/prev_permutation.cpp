#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v = {3, 2, 1};

    do {
        for (int n : v) {
            std::cout << n << " ";
        }
        std::cout << "\n";
    } while (std::prev_permutation(v.begin(), v.end()));

    return 0;
}
// Output:
// 3 2 1
// 3 1 2
// 2 3 1
// 2 1 3
// 1 3 2
// 1 2 3
