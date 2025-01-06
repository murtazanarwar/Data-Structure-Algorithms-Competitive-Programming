#include <iostream>
#include <map>

int main() {
    std::multimap<std::string, int> mm;
    mm.insert({"apple", 3});
    mm.insert({"banana", 5});
    mm.insert({"apple", 2});  // Allows duplicate keys

    for (const auto& pair : mm)
        std::cout << pair.first << ": " << pair.second << "\n";
    return 0;
}
// Output:
// apple: 3
// apple: 2
// banana: 5
//Key-value pairs allowing duplicate keys