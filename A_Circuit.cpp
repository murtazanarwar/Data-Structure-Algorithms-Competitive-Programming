#include <iostream>
using namespace std;

int main() {
    int t; cin>>t;
    while (t--) {
        int n; cin>>n;
        int a = 0, z = 0;

        for (int i = 0; i < 2 * n; i++) {
            int x; cin>>x;
            a += x;
            z += (x == 0);
        }
        cout << (a % 2) << " " << min(a, z) << "\n";
    }
}
