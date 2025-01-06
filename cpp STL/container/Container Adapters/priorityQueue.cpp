#include <iostream>
#include <queue>

int main() {
    std::priority_queue<int> pq;
    pq.push(3);
    pq.push(5);
    pq.push(1);

    while (!pq.empty()) {
        std::cout << pq.top() << " ";
        pq.pop();
    }
    return 0;
}
// Output: 5 3 1
