#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v1 = {1, 2, 3, 4, 5, 6};
    std::vector<int> v2 = {2, 4, 6};

    bool result = std::includes(v1.begin(), v1.end(), v2.begin(), v2.end());

    std::cout << "v1 includes v2: " << (result ? "true" : "false") << "\n";

    std::vector<int> v3 = {2, 4, 7};
    result = std::includes(v1.begin(), v1.end(), v3.begin(), v3.end());

    std::cout << "v1 includes v3: " << (result ? "true" : "false") << "\n";

    return 0;
}
// Output:
// v1 includes v2: true
// v1 includes v3: false
