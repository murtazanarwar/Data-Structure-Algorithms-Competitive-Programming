#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

#define F first
#define S second
#define PB push_back
#define MP make_pair

const int INF = 1e9 + 5;
const int MOD = 1e9 + 7;

int lcm (int a, int b) {
    return a / __gcd(a, b) * b;
}

void solve() {
    int a, b;
    cin>>a>>b;
    if( b % a == 0 ){
        cout<< b * ( b / a )<<'\n';
    } else {
        cout<<lcm(a,b)<<'\n';
    }
    return;
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