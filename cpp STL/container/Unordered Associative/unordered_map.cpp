#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_map<std::string, int> umap;
    umap["apple"] = 3;
    umap["banana"] = 5;

    for (const auto& pair : umap)
        std::cout << pair.first << ": " << pair.second << "\n";
    return 0;
}
// Output: apple: 3 banana: 5 (order may vary)
