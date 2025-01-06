#include <iostream>
#include <list>
//Doubly linked list
int main() {
    std::list<int> lst = {1, 2, 3, 4};
    lst.push_front(0);  // Adds element at the front
    lst.push_back(5);   // Adds element at the back

    for (int n : lst)
        std::cout << n << " ";
    return 0;
}
// Output: 0 1 2 3 4 5
