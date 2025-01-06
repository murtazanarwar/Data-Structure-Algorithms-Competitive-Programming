#include <iostream>
#include <vector>
//Dynamic Array
int main() {
    std::vector<int> v = {1, 2, 3, 4, 5};
    v.push_back(6);
    for (int n : v)
        std::cout << n << " ";
    return 0;
}
// Output: 1 2 3 4 5 6