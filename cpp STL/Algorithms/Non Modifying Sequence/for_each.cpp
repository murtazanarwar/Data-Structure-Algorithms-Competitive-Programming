#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v = {1, 2, 3, 4, 5};
    std::for_each(v.begin(), v.end(), [](int n) { std::cout << n << " "; });
    return 0;
}
// Output: 1 2 3 4 5
