#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    while (t--) {
        int n;
        long long x, y;
        cin >> n >> x >> y;

        vector<int> a(n);
        long long total = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            total += a[i];
        }

        sort(a.begin(), a.end());

        long long count = 0;
        long long minSum = total - y;
        long long maxSum = total - x;

        for (int i = 0; i < n - 1; i++) {
            long long targetMin = minSum - a[i];
            long long targetMax = maxSum - a[i];

            int left = lower_bound(a.begin() + i + 1, a.end(), targetMin) - a.begin();
            int right = upper_bound(a.begin() + i + 1, a.end(), targetMax) - a.begin();

            count += (right - left);
        }

        cout << count << '\n';
    }

    return 0;
}
