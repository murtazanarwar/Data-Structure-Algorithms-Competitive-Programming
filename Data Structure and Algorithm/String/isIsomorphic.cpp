// C++ program to check if two strings are isomorphic
#include <bits/stdc++.h>
using namespace std;
#define MAX_CHARS 256

// This function returns true if str1 and str2 are
// isomorphic
    bool isIsomorphic(string s, string t) {
        unordered_map<char, int> charIndexS;
        unordered_map<char, int> charIndexT;

        for (int i = 0; i < s.length(); i++) {
            if (charIndexS.find(s[i]) == charIndexS.end()) {
                charIndexS[s[i]] = i;
            }

            if (charIndexT.find(t[i]) == charIndexT.end()) {
                charIndexT[t[i]] = i;
            }

            if (charIndexS[s[i]] != charIndexT[t[i]]) {
                return false;
            }
        }

        return true;        
    }

// Driver program
int main()
{
    cout << (isIsomorphic("aab", "xxy") ? "True" : "False")
         << endl;
    return 0;
}
