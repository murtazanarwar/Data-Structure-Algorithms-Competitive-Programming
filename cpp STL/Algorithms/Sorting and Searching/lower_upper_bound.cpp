#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v = {1, 2, 4, 4, 5, 6};
    auto lb = std::lower_bound(v.begin(), v.end(), 4);  // First element >= 4
    auto ub = std::upper_bound(v.begin(), v.end(), 4);  // First element > 4

    std::cout << "Lower bound of 4: " << *lb << "\n";
    std::cout << "Upper bound of 4: " << *ub << "\n";
    return 0;
}
// Output:
// Lower bound of 4: 4
// Upper bound of 4: 5
