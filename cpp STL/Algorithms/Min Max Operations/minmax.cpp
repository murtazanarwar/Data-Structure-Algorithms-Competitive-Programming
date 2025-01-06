#include <iostream>
#include <algorithm>

int main() {
    int a = 5, b = 3;
    auto result = std::minmax(a, b);
    std::cout << "Min: " << result.first << ", Max: " << result.second << std::endl; // Output: Min: 3, Max: 5
    return 0;
}
