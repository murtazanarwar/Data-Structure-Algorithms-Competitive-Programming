#include <iostream>
#include <vector>
#include <algorithm> // for find_if

bool isEven(int num) {
    return num % 2 == 0;
}

int main() {
    std::vector<int> numbers = {1, 3, 5, 7, 8, 11, 13};

    // Find the first even number in the vector
    auto it = std::find_if(numbers.begin(), numbers.end(), isEven);

    if (it != numbers.end()) {
        std::cout << "First even number is: " << *it << std::endl;
    } else {
        std::cout << "No even number found." << std::endl;
    }

    return 0;
}
