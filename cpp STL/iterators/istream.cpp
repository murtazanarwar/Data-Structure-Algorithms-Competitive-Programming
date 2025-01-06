#include <iostream>
#include <vector>
#include <iterator>

int main() {
    std::istream_iterator<int> it(std::cin), end; // To read from standard input
    std::vector<int> num(it, end);

    for (auto it = num.begin(); it != num.end(); ++it) 
        std::cout << *it << " ";
    return 0;
}
// Enter 5 numbers: 6 7 8 9 10
// Output: 1 2 3 4 5 6 7 8 9 10
