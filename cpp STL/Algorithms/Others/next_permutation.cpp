#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v = {1, 2, 3};
    
    do {
        for (int n : v) {
            std::cout << n << " ";
        }
        std::cout << "\n";
    } while (std::next_permutation(v.begin(), v.end()));

    return 0;
}
