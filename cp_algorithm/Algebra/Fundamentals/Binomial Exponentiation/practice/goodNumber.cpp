#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const long long MOD = 1e9 + 7;

long long large_exponents_modulo(long long a, long long b, long long m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
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
    if( n % 2 ){
        long long even = (long long) ( n / 2 ) + 1;
        long long odd = n - even;
        ans *= large_exponents_modulo(5,even,MOD);
        ans *= large_exponents_modulo(4,odd,MOD);
    } else {
        n /= 2; 
        ans *= large_exponents_modulo(5,n,MOD);
        ans *= large_exponents_modulo(4,n,MOD);
    }
    ans %= MOD;
    cout<<ans<<'\n';
    return 0;
}