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

int gcd(int a, int b) {
    if (!a || !b)
        return a | b;
    unsigned shift = __builtin_ctz(a | b);
    a >>= __builtin_ctz(a);
    do {
        b >>= __builtin_ctz(b);
        if (a > b)
            swap(a, b);
        b -= a;
    } while (b);
    return a << shift;
}

void solve() {
    int A, B, C, P;
    cin>>A>>B>>C>>P;
    int n = P / A;
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if( gcd(B,C) == (P - i * A) ) cnt++;
    }
    cout<<cnt;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t) {
        cout<<"CASE "<<t<<": ";
        solve();
        cout<<'\n';
        t--;
    }
    return 0;
}