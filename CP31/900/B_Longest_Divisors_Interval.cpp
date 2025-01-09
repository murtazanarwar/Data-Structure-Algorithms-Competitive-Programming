#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

    long t; cin>>t;
    while(t--){
        ll n; cin>>n;
        ll cnt(1);
        for(ll p = 2; n % p == 0 && p <= n; p++){++cnt;}
        cout<<cnt<<'\n';
    }

}