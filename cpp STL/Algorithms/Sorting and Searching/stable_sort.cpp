#include <iostream>
#include <vector>
#include <algorithm>

struct Person {
    std::string name;
    int age;
};

// Comparator function to sort by age
bool compareByAge(const Person& a, const Person& b) {
    return a.age < b.age;
}

int main() {
    std::vector<Person> people = {{"Alice", 30}, {"Bob", 25}, {"Charlie", 30}, {"Dave", 20}};

    // Stable sort by age
    std::stable_sort(people.begin(), people.end(), compareByAge);

    for (const auto& person : people)
        std::cout << person.name << " (" << person.age << ") ";
    return 0;
}
// Output: Dave (20) Bob (25) Alice (30) Charlie (30)
// Notice that Alice and Charlie, both aged 30, remain in their original order.