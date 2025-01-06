#include <iostream>
#include <deque>
//Double-ended queue
int main() {
    std::deque<int> dq = {1, 2, 3};
    dq.push_front(0);  // Adds element at the front
    dq.push_back(4);   // Adds element at the back

    for (int n : dq)
        std::cout << n << " ";
    return 0;
}
// Output: 0 1 2 3 4
