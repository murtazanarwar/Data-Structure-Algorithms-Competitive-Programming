#include <iostream>
#include <memory> // Required for std::weak_ptr

int main() {
    std::shared_ptr<int> p1 = std::make_shared<int>(20);
    std::weak_ptr<int> wp = p1; // wp does not affect the reference count

    std::cout << "Use count: " << wp.use_count() << std::endl; // Output: Use count: 1

    if (auto sp = wp.lock()) { // Check if the object is still alive
        std::cout << "Value: " << *sp << std::endl; // Output: Value: 20
    }

    p1.reset(); // p1 is now empty

    if (auto sp = wp.lock()) {
        std::cout << "Value: " << *sp << std::endl; // This block will not execute
    } else {
        std::cout << "Resource has been released." << std::endl; // Output: Resource has been released.
    }

    return 0;
}
