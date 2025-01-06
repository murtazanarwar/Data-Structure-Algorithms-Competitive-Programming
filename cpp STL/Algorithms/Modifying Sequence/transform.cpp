#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v = {1, 2, 3};
    std::transform(v.begin(), v.end(), v.begin(), [](int x) { return x * x; });

    for (int n : v)
        std::cout << n << " ";
    return 0;
}
// Output: 1 4 9
//sort of map in java script