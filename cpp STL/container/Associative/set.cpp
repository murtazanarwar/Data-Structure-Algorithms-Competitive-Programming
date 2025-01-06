#include <iostream>
#include <set>

int main() {
    std::set<int> s = {3, 1, 4, 1, 5, 9};
    s.insert(2);
    for (int n : s)
        std::cout << n << " ";
    return 0;
}
// Output: 1 2 3 4 5 9
