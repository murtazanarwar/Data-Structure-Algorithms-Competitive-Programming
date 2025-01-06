//Singly linked list
#include <iostream>
#include <forward_list>

int main() {
    std::forward_list<int> fl = {2, 3, 4};
    fl.push_front(1);  // Adds element at the front

    for (int n : fl)
        std::cout << n << " ";
    return 0;
}
// Output: 1 2 3 4
