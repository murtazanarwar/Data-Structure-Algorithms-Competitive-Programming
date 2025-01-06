#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin>>n;
    vector<int> a(n);
    int count0 = 0;
    bool flag = false; 
    int l = -1; 
    int cnt = 0, cnt0 = 0;
    for(int i = 0; i < n; i++){
        cin>>a[i];
        if(a[i] != 0){
            if(l == -1){
                l = i;
            }
        }else{
            cnt0++;
        }
    }
    int r = l;
    while(r < n && a[r] != 0){
        cnt++;
        r++;
    }

    if(cnt0 == n){
        cout<<"0"<<'\n';
        return;
    } else if(cnt0 == 0) {
        cout<<"1"<<'\n';
        return;
    } else if( cnt + cnt0 == n ){
        cout<<"1"<<'\n';
        return; 
    }
    cout<<"2"<<'\n';
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