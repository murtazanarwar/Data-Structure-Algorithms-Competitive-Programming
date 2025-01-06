#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> source = {1, 2, 3, 4, 5};
    std::vector<int> destination(5);

    // Copying elements from source to destination
    std::copy(source.begin(), source.end(), destination.begin());

    // Displaying the copied elements
    std::cout << "Destination vector: ";
    for (int n : destination) {
        std::cout << n << " ";
    }
    return 0;
}
// Output: Destination vector: 1 2 3 4 5
