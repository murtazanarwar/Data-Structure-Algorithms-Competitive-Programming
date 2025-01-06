#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v1 = {1, 2, 3, 4, 5};
    std::vector<int> v2 = {1, 2, 3, 4, 5};
    std::vector<int> v3 = {1, 2, 0, 4, 5};

    bool isEqual1 = std::equal(v1.begin(), v1.end(), v2.begin());
    bool isEqual2 = std::equal(v1.begin(), v1.end(), v3.begin());

    std::cout << "v1 and v2 are equal: " << (isEqual1 ? "true" : "false") << "\n";
    std::cout << "v1 and v3 are equal: " << (isEqual2 ? "true" : "false") << "\n";

    return 0;
}
// Output:
// v1 and v2 are equal: true
// v1 and v3 are equal: false
