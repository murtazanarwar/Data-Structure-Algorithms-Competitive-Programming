#include <iostream>
#include <bits/stdc++.h>

int main() {
    std::unordered_multimap<std::string, int> umm;
    umm.insert({"apple", 3});
    umm.insert({"banana", 5});
    umm.insert({"apple", 2});  // Allows duplicate keys

    for (const auto& pair : umm)
        std::cout << pair.first << ": " << pair.second << "\n";
    return 0;
}
// Output (order may vary):
// apple: 3
// apple: 2
// banana: 5
