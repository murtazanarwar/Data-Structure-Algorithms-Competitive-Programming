#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin>>n;
    string s; cin>>s;
    int cntp = 0, cnts = 0;
    int pi = -1, si = -1; //pi -> first occurance of "P" and si -> last occurance of "S"
    for(int i = 0; i < n; i++){
        if(s[i] == 's' ){
            cnts++;
            si = i;
        }else if(s[i] == 'p'){
            cntp++;
            if(pi == -1) pi = i;
        }
    }
    if( cnts == 0 || cntp == 0 ){
        cout<<"YES"<<'\n';
        return;
    } else if( pi < si ){
        cout<<"NO"<<'\n';
        return;
    } else if( pi == n-1 || si == 0 ){
        cout<<"YES"<<'\n';
        return;
    }
    cout<<"NO"<<'\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}