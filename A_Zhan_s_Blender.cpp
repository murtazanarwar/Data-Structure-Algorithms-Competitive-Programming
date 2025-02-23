#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    
    while (t--) {
        ll n,x,y;
        cin>>n>>x>>y;
        
        ll mini = min(x, y);
        ll result = (n + mini - 1) / mini;
        
        cout<<result<<"\n";
    }
    
    return 0;
}
