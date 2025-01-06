#include <iostream>
#include <bits/stdc++.h>

int main() {
    std::unordered_multiset<int> ums = {1, 3, 5, 3, 9};
    ums.insert(5);

    for (int n : ums)
        std::cout << n << " ";
    return 0;
}
// Output: Order may vary but duplicates are allowed, e.g., 1 3 3 5 5 9
