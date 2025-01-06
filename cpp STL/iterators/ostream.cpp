#include <iostream>
#include <vector>
#include <iterator>

int main() {
    std::vector<int> v = {3, 4, 5};
    std::ostream_iterator<int> out_it(std::cout, "\n");

    *out_it = 1;  // Adds 4 to output
    ++out_it;
    *out_it = 2;  // Adds 5 to output

    // v.push_back(12);
    std::copy(v.begin(), v.end(), out_it); 
}
// Output: 1 2 3 4 5
