#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <list>
#include <set>
#include <queue>
#include <bits/stdc++.h>
#define ll long long
#define int long long
#define pb push_back
#define ppb pop_back
#define mp make_pair
using namespace std;
using vpi = vector<pair<int, int>>;
using pi = pair<int, int>;
using vi = vector<int>;
using vvi = vector<vector<int>>;
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
const int inf = 9e18;
const int mod = 1e9 + 7;
const int NUM = 1000030;
const int N = 10000000;
#define DEBUG(x) cerr << #x << ": " << x << '\n';

template <typename T, typename Y>
istream &operator>>(istream &is, pair<T, Y> &p) {
    is >> p.first >> p.second;
    return is;
}
template <typename T, typename Y>
ostream &operator<<(ostream &os, pair<T, Y> p) {
    os << p.first << ' ' << p.second << ' ';
    return os;
}
template <typename T>
istream &operator>>(istream &is, vector<T> &v) {
    for (auto &i : v)
        is >> i;
    return is;
}
template <typename T>
ostream &operator<<(ostream &os, vector<T> v) {
    for (auto &i : v)
        os << i << ' ';
    return os;
}

vector<int> lp, sieve;
vector<int> pr;
vector<int> power;
vector<int> fact;

void initpow(int x) {
    power.resize(NUM);
    power[0] = 1;
    for (int i = 1; i < NUM; i++) {
        power[i] = (power[i - 1] * (x % mod)) % mod;
    }
}

void initFactorial() {
    fact.resize(NUM);
    fact[0] = 1;
    for (int i = 1; i < NUM; i++) {
        fact[i] = (fact[i - 1] * i) % mod;
    }
}

void calc_sieve() {
    sieve.resize(NUM + 1, 0);
    for (int x = 2; x <= NUM; x++) {
        if (sieve[x])
            continue;
        for (int u = x; u <= NUM; u += x) {
            sieve[u] = x;
        }
    }
}

void primefactor() {
    lp.resize(N + 1, 0);
    for (int i = 2; i <= N; ++i) {
        if (lp[i] == 0) {
            lp[i] = i;
            pr.push_back(i);
        }
        for (int j = 0; j < (int)pr.size() && pr[j] <= lp[i] && i * pr[j] <= N; ++j)
            lp[i * pr[j]] = pr[j];
    }
}

int binpow(int a, int b) {
    int res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}

int binpow(int a, int b, int mod) {
    int res = 1;
    while (b > 0) {
        if (b & 1)
            res = (res * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return res % mod;
}

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int lcm(int a, int b) {
    return ((a / gcd(a, b)) * b);
}

int inversemod(int a, int mod) {
    return binpow(a, mod - 2, mod);
}

int divmod(int a, int b, int c) {
    return ((a % c) * inversemod(b, c)) % c;
}

int combination(int n, int k) {
    if (k > n)
        return 0;
    int p1 = (fact[n] * inversemod(fact[k], mod)) % mod;
    int p2 = (1 * inversemod(fact[n - k], mod)) % mod;
    return (p1 * p2) % mod;
}

void efficient(){
    int n;
    cin >> n;
    vector<long long> arr(n);
    for (int i = 0; i < n; ++i) cin >> arr[i];

    long long ans = 0;
    for (int i = 0; i < n; ++i) {
        long long maxi = LLONG_MIN;
        int j = i;
        while (j < n && ((arr[j] > 0 && arr[i] > 0) || (arr[j] < 0 && arr[i] < 0))) {
            maxi = max(maxi, arr[j]);
            ++j;
        }
        ans += maxi;
        i = j - 1;
    }

    cout << ans << endl;
}

void solve() {
    int n; cin>>n;
    vector<int> a(n);
    for(auto &i: a) cin>>i;

    int i = 0, j = 1; int sum = 0; int prev = a[0];
    while( i < n && j < n ){
        if(a[i] > 0 && a[j] > 0){
            prev = max(prev, a[j]);
            j++;
        } else if( a[i] < 0 && a[j] < 0){
            prev = max(prev, a[j]);
            j++;
        } else {
            sum += prev;
            prev = a[j];
            i = j;
            j++;
        }
    }

    sum += prev;

    cout<<sum<<'\n';
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
        // solve();
        efficient();
    return 0;
}