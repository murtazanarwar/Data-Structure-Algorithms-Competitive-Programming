#include<bits/stdc++.h>
using namespace std;

string frequencySort(const string& s) {
    int n = s.size();
    unordered_map<char, int> cnt;
    for (char c : s)  
        cnt[c] += 1;
    
    vector<vector<char>> bucket(n + 1);
    for (const auto& p : cnt) {
        char c = p.first;
        int f = p.second;
        bucket[f].push_back(c);
    }
    
    string ans;
    for (int freq = n; freq >= 1; --freq)
        for (char c : bucket[freq]) 
            ans.append(freq, c);
    
    return ans;
}

int main() {
    string s = "tree";
    cout << "Sorted by frequency: " << frequencySort(s) << endl;

    s = "cccaaa";
    cout << "Sorted by frequency: " << frequencySort(s) << endl;

    s = "Aabb";
    cout << "Sorted by frequency: " << frequencySort(s) << endl;

    return 0;
}
