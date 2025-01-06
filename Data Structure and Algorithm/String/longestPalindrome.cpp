#include <iostream>
#include <vector>
#include <string>
using namespace std;

string longestPalindromicSubstring(string s) {
    int n = s.size();
    if (n == 0) return "";

    // Transform original string to handle even-length palindromes
    string t = "#";
    for (char c : s) {
        t += c;
        t += "#";
    }
    
    int len = t.size();
    vector<int> p(len, 0);  // Array to store the radius of the palindrome at each position
    int center = 0, right = 0;  // Current center and right boundary of the palindrome
    
    int max_len = 0, max_center = 0;  // Track max palindrome length and center
    
    for (int i = 0; i < len; ++i) {
        int mirror = 2 * center - i;
        
        // Check if the current position is within the right boundary
        if (i < right) {
            p[i] = min(right - i, p[mirror]);
        }
        
        // Expand the palindrome centered at i
        while (i + p[i] + 1 < len && i - p[i] - 1 >= 0 && t[i + p[i] + 1] == t[i - p[i] - 1]) {
            p[i]++;
        }
        
        // Update center and right boundary if the palindrome expanded beyond the current right
        if (i + p[i] > right) {
            center = i;
            right = i + p[i];
        }
        
        // Track the maximum length palindrome
        if (p[i] > max_len) {
            max_len = p[i];
            max_center = i;
        }
    }
    
    // Extract the longest palindrome from the original string
    int start = (max_center - max_len) / 2;
    return s.substr(start, max_len);
}

int main() {
    string s;
    cout << "Enter the string: ";
    cin >> s;

    string result = longestPalindromicSubstring(s);
    cout << "Longest Palindromic Substring: " << result << endl;

    return 0;
}
