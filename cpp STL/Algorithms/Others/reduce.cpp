#include <iostream>
#include <vector>
#include <numeric> // Required for std::reduce
#include <execution> // Required for parallel execution policies (optional)

int main() {
    std::vector<int> v = {1, 2, 3, 4, 5};

    // Using std::reduce to sum the elements
    int sum = std::reduce(v.begin(), v.end(), 0); // Default serial execution

    std::cout << "Sum: " << sum << std::endl; // Output: Sum: 15

    // Using std::reduce with a custom binary operation (multiplication)
    int product = std::reduce(v.begin(), v.end(), 1, std::multiplies<int>());

    std::cout << "Product: " << product << std::endl; // Output: Product: 120

    // Using std::reduce with parallel execution (if supported)
    // Uncomment the following line to enable parallel execution (if supported)
    // int parallel_sum = std::reduce(std::execution::par, v.begin(), v.end(), 0);
    // std::cout << "Parallel Sum: " << parallel_sum << std::endl; 

    return 0;
}
