#include <bits/stdc++.h>
using namespace std;

string removeOuterParentheses(string s) {
    int n = s.length();
    string ans;
    int cnt = 0;
    for (auto c : s) {
        if (c == '(' && cnt++ > 0) {
            ans += c;
        }
        if (c == ')' && cnt-- > 1) {
            ans += c;
        }
    }
    return ans;
}

int main() {
    vector<string> testCases = {
        "(()())(())",        // Expected: "()()()"
        "(()())(())(()(()))", // Expected: "()()()()(())"
        "()()",               // Expected: ""
        "((()())())"          // Expected: "(()())"
    };

    for (int i = 0; i < testCases.size(); i++) {
        string result = removeOuterParentheses(testCases[i]);
        cout << "Test case " << i + 1 << ": " << testCases[i] << endl;
        cout << "Output: " << result << endl;
        cout << endl;
    }

    return 0;
}
