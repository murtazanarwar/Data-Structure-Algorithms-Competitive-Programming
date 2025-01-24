#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string s;
    getline(cin,s);
    int n = s.length();

    long long cnt = 1, maxCnt = 1;
    for(int i = 1; i < n; i++){
        if(s[i] == s[i-1]) cnt++;
        else cnt = 1;
        maxCnt = max(maxCnt, cnt);
    }
    cout<<maxCnt<<'\n';

    return 0;
}