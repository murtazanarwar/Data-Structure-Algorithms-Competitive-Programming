#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, x;
        cin >> n >> k >> x;
        if (x != 1) {
            cout << "YES\n" << n << "\n";
            for (int i = 0; i < n; i++) cout << 1 << " ";
            cout << "\n";
        } else if (k == 1 || (k == 2 && n % 2 == 1)) {
            cout << "NO\n";
        } else {
            cout << "YES\n" << n / 2 << "\n";
            cout << (n % 2 == 1 ? 3 : 2) << " ";
            for (int i = 1; i < n / 2; i++) cout << 2 << " ";
            cout << "\n";
        }
    }
    return 0;
}