#include <iostream>
#include <tuple> // Required for std::tie

int main() {
    int a;
    double b;
    std::string c;

    std::tie(a, b, c) = std::make_tuple(42, 3.14, "pear");
    
    std::cout << "a: " << a << ", b: " << b << ", c: " << c << std::endl; // Output: a: 42, b: 3.14, c: pear
    
    return 0;
}
