#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    string s;
    cin >> n >> s;
    
    unordered_map<char, pair<int, int>> freq;
    for (int i = 0; i < n; i++) {
        freq[s[i]].first++;
        freq[s[i]].second = i;
    }

    pair<int, int> maxi = {INT_MIN, -1};
    pair<int, int> mini = {INT_MAX, -1};

    for (auto &it : freq) {
        int charFreq = it.second.first;
        int lastIndex = it.second.second;

        if (charFreq > maxi.first || (charFreq == maxi.first && lastIndex > maxi.second)) {
            maxi = {charFreq, lastIndex};
        }

        if (charFreq < mini.first || (charFreq == mini.first && lastIndex < mini.second)) {
            mini = {charFreq, lastIndex};
        }
    }

    s[mini.second] = s[maxi.second];
    cout << s << '\n';
}

void optimal(){
    int n; cin>>n;
    string s; cin>>s;

    vector<int> f(26);
    for(auto &i: s) f[i - 'a']++;

    char mx = s[0], mn = s[0];
    for(int i = 0; i < 26; i++){
        if(f[i] >= f[mx - 'a']) mx = 'a' + i;
        if(f[25 - i] <= f[mn - 'a'] && f[25 - i]) mn = 'a' + 25 - i;
    }

    for(int i = 0; i < n; i++){
        if(s[i] == mn){
            s[i] = mx;
            break;
        }
    }

    cout<<s<<'\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        optimal();
    }
    return 0;
}
