#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v(5);
    std::fill(v.begin(), v.end(), 7);  // Sets all elements to 7

    for (int n : v)
        std::cout << n << " ";
    return 0;
}
// Output: 7 7 7 7 7
