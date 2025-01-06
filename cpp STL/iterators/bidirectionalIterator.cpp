#include <iostream>
#include <list>

int main() {
    std::list<int> lst = {10, 20, 30, 40, 50};
    
    std::cout << "Forward: ";
    for (auto it = lst.begin(); it != lst.end(); ++it)
        std::cout << *it << " ";

    std::cout << "\nBackward: ";
    for (auto it = lst.rbegin(); it != lst.rend(); ++it)
        std::cout << *it << " ";
    return 0;
}
// Output:
// Forward: 10 20 30 40 50 
// Backward: 50 40 30 20 10
