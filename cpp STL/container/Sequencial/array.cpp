#include <iostream>
#include <array>
//Fixed Sized Array
int main() {
    std::array<int, 5> arr = {1, 2, 3, 4, 5};

    for (int n : arr)
        std::cout << n << " ";
    return 0;
}
// Output: 1 2 3 4 5
