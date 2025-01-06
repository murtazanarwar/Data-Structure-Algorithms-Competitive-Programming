#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;

        vector<int> a(m); 
        for (auto &i : a) cin >> i;

        unordered_set<int> known; 
        for (int i = 0; i < k; i++) {
            int q; 
            cin >> q;
            known.insert(q);
        }

        if (n - k > 1) {
            cout << string(m, '0') << '\n';
            continue;
        }
        if (k == n) {
            cout << string(m, '1') << '\n';
            continue;
        }

        string ans(m, '0');
        for (int i = 0; i < m; i++) {
            if (known.count(a[i]) == 0 && known.size() == n - 1) {
                ans[i] = '1';
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
