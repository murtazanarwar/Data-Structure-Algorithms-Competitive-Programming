#include <iostream>
#include <utility> // For std::swap

int main() {
    int a = 5;
    int b = 10;

    std::cout << "Before swap: a = " << a << ", b = " << b << "\n";
    std::swap(a, b);  // Swaps the values of a and b
    std::cout << "After swap: a = " << a << ", b = " << b << "\n";
    return 0;
}
// Output:
// Before swap: a = 5, b = 10
// After swap: a = 10, b = 5
