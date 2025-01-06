#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n; cin>>n;
    vector<int> num(n);
    for(auto &i: num) cin>>i;
    int cnt = 0;
    for(int i = 1; i < n; i++){
            if(num[i-1] > num[i]){
                cnt += num[i-1] - num[i];
                num[i] = num[i-1];
            }
    }
    cout<<cnt<<'\n';
    return 0;
}