#include <bits/stdc++.h>
using namespace std;

void func(int i, int l, int r, int k, vector<int> &ans) {
    if (l == r) {
        ans[l] = i;
        return;
    }
    int sz = r - l - 1;
    if (sz < 60 && (1LL << sz) < k) {
        ans[r] = i;
        func(i + 1, l, r - 1, k - (1LL << sz), ans);
    } else {
        ans[l] = i;
        func(i + 1, l + 1, r, k, ans);
    }
} // n
 
void solve() {
    int n, k;
    cin >> n >> k;
    if (n - 1 < 60 && (1LL << (n - 1)) < k) {
        cout << "-1\n";
        return;
    }
    vector<int> ans(n);
    func(1, 0, n - 1, k, ans); // n
 
    for (auto i : ans)
        cout << i << ' '; // n
    cout << '\n';
} // tc -> O(n)

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