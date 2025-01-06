#include <bits/stdc++.h>
using namespace std;

long long binpow(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    long long ans = 1;
    ans *= ( (long long) (9 * n ) - 3 );
    ans *= binpow(4, n-3);

    cout<<ans<<'\n';
    return 0;
}