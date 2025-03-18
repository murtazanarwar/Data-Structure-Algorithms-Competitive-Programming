#include <iostream>
#include <vector>
#include <string>
#include <bits/stdc++.h>
using namespace std;

bool check(int min_penalty, int n, int k, string& s, vector<int>& a) {
    char last = 'R';
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > min_penalty) {
            if (s[i] == 'B' && last != 'B') {
                cnt++;
            }
            last = s[i];
        }
    }
    return cnt <= k;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,k; cin>>n>>k;
        string s; cin>>s;
        
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin>>a[i];
        }
        
        int l = 0, r = *max_element(a.begin(), a.end()), res = -1;
        while (l <= r) {
            int m = (l + r) / 2;
            if (check(m, n, k, s, a)) {
                res = m;
                r = m - 1;
            } else {
                l = m + 1;
            }
        }
        cout << res << "\n";
    }
    return 0;
}