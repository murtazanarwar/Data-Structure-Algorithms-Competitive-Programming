#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> c(n);
    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }
    
    // Sort the array
    sort(c.begin(), c.end());
    
    // The smallest element must be 1.
    if (c[0] != 1) {
        cout << "NO\n";
        return;
    }
    
    long long sum = 1;
    for (int i = 1; i < n; i++) {
        if (c[i] > sum) {
            cout << "NO\n";
            return;
        }
        sum += c[i];
    } 
    cout << "YES\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
