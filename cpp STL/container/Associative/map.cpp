//  Key-value pairs with unique keys
#include <iostream>
#include <map>

int main() {
    std::map<std::string, int> m;
    m["apple"] = 3;
    m["banana"] = 5;

    for (const auto& pair : m)
        std::cout << pair.first << ": " << pair.second << "\n";
    return 0;
}
// Output: apple: 3 banana: 5
