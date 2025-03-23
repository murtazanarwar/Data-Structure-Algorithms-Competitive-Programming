#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <list>
#include <set>
#include <queue>
#include <bits/stdc++.h>  // Includes most standard libraries

// Macro definitions and type aliases
#define ll long long
#define int long long               // Use 64-bit integers by default
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()

using namespace std;
using vpi = vector<pair<int, int>>;
using pi  = pair<int, int>;
using vi  = vector<int>;
using vvi = vector<vector<int>>;

// Constants used throughout the program
const int inf = 9e18;
const int mod = 1e9 + 7;
const int NUM = 1000030;
const int N = 10000000;

// Debug macro to print variable values
#define DEBUG(x) cerr << #x << ": " << x << '\n';

// Utility functions to output "YES" or "NO"
void yes() { cout << "Yes\n"; }
void no()  { cout << "No\n"; }

// Function to print vectors (useful for debugging)
template <class T>
void print_v(vector<T> &v) {
    if (v.empty()) {
        cout << "{ }\n";
        return;
    }
    cout << "{ " << v[0];
    for (int i = 1; i < v.size(); i++)
        cout << ", " << v[i];
    cout << " }\n";
}

void put(int& num){
    cout<<num<<'\n';
}

// Overloading input and output operators for pairs and vectors

// Input operator for pair
template <typename T, typename Y>
istream &operator>>(istream &is, pair<T, Y> &p) {
    is >> p.first >> p.second;
    return is;
}

// Output operator for pair
template <typename T, typename Y>
ostream &operator<<(ostream &os, pair<T, Y> p) {
    os << p.first << ' ' << p.second << ' ';
    return os;
}

// Input operator for vector
template <typename T>
istream &operator>>(istream &is, vector<T> &v) {
    for (auto &i : v)
        is >> i;
    return is;
}

// Output operator for vector
template <typename T>
ostream &operator<<(ostream &os, vector<T> v) {
    for (auto &i : v)
        os << i << ' ';
    return os;
}

// Global variables for sieve, prime factors, power series and factorials
vector<int> lp, sieve;
vector<int> pr;
vector<int> power;
vector<int> fact;

// Precompute powers of a number modulo mod
void initpow(int x) {
    power.resize(NUM);
    power[0] = 1;
    for (int i = 1; i < NUM; i++) {
        power[i] = (power[i - 1] * (x % mod)) % mod;
    }
}

// Precompute factorials modulo mod
void initFactorial() {
    fact.resize(NUM);
    fact[0] = 1;
    for (int i = 1; i < NUM; i++) {
        fact[i] = (fact[i - 1] * i) % mod;
    }
}

// Compute the sieve of Eratosthenes up to NUM
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

// Precompute lowest prime factors for numbers up to N and store primes in vector 'pr'
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

// Fast exponentiation (binary exponentiation) without modulo
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

// Fast exponentiation (binary exponentiation) with modulo arithmetic
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

// Compute the greatest common divisor (GCD) of two numbers using recursion
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Compute the least common multiple (LCM) of two numbers
int lcm(int a, int b) {
    return ((a / gcd(a, b)) * b);
}

// Compute modular inverse using Fermat's little theorem
int inversemod(int a, int mod) {
    return binpow(a, mod - 2, mod);
}

// Compute division modulo mod (i.e., a / b modulo c)
int divmod(int a, int b, int c) {
    return ((a % c) * inversemod(b, c)) % c;
}

// Compute combinations nCk modulo mod using precomputed factorials
int combination(int n, int k) {
    if (k > n)
        return 0;
    int p1 = (fact[n] * inversemod(fact[k], mod)) % mod;
    int p2 = (inversemod(fact[n - k], mod)) % mod;
    return (p1 * p2) % mod;
}

// Solve function for each test case
void solve() {
    int n; cin>>n;
    vector<int> a(n); cin>>a;
    
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(a[i] < 0) cnt++;
        a[i] = abs(a[i]);
    }
    
    sort(a.begin(), a.end());
    int idx = (cnt % 2 == 0) ? 0 : 1;
    
    int sum = 0;
    for(int i = 0; i < idx; i++) sum -= a[i];
    for(int i = idx; i < n; i++) sum += a[i];

    put(sum);
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t = 1;
    cin >> t;
    // t = 1;
    while (t--)
        solve();
    return 0;
}