#include <iostream>
#include <forward_list>

int main() {
    std::forward_list<int> fl = {1, 2, 3, 4, 5};
    
    for (auto it = fl.begin(); it != fl.end(); ++it) 
        std::cout << *it << " ";
    return 0;
}
// Output: 1 2 3 4 5
