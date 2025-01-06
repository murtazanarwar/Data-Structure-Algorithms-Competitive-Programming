#include <iostream>
#include <set>

int main() {
    std::multiset<int> ms = {1, 3, 5, 3, 9};
    ms.insert(5);

    for (int n : ms)
        std::cout << n << " ";
    return 0;
}
// Output: 1 3 3 5 5 9
// Collection of elements that allows duplicates