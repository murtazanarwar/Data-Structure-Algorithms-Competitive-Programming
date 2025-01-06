#include <bits/stdc++.h>
using namespace std;

string largestOddNumber(string num) {
    int ind = num.length() - 1;
    while (ind >= 0 && ((num[ind] - '0') & 1) == 0) {
        --ind;
    }
    return num.substr(0, ind + 1);
}

int main() {
    // Test cases to verify the function
    vector<string> testCases = {
        "52",       // Expected output: "5"
        "4206",     // Expected output: ""
        "35427",    // Expected output: "35427"
        "420",      // Expected output: ""
        "123456789" // Expected output: "123456789"
    };

    for (int i = 0; i < testCases.size(); i++) {
        string result = largestOddNumber(testCases[i]);
        cout << "Test case " << i + 1 << ": " << testCases[i] << endl;
        cout << "Largest odd number: " << result << endl;
        cout << endl;
    }

    return 0;
}
