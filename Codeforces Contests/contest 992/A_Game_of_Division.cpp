#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin>>n;
    int k; cin>>k;
    vector<int> a(n);
    for(auto &i : a) cin>>i;
    int ans = -1;
    for(int i = 0; i < n; i++){
        int j = 0;
        while(j < n){
            if(j != i && abs(a[i] - a[j]) % k == 0) break;
            j++;
        }
        if(j == n){
            ans = i;
            break;
        }
    }
    if(ans != -1) cout<<"YES"<<'\n'<<ans + 1<<'\n';
    else cout<<"NO"<<'\n';
}

void optimal() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    for (int i = 0; i < n; i++) {
        bool f = 1;
        for (int j = 0; j < n; j++) {
            if (i == j)
                continue;
            if (abs(a[i] - a[j]) % k == 0) {
                f = 0;
                break;
            }
        }
        if (f) {
            cout << "YES\n";
            cout << i + 1 << '\n';
            return;
        }
    }
    cout << "NO\n";
}

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
// Comparison of solve() and optimal():
// 1. Efficiency:
//    - Both solve() and optimal() are O(n^2) in the worst case, as they involve nested loops to compare each pair of elements.
//    - No significant difference in efficiency between the two functions.
// 2. Correctness:
//    - Both functions correctly identify the required index or determine that no such index exists, as per the problem statement.
// 3. Clarity:
//    - solve(): Slightly less readable due to the use of variable `ans` and a `while` loop for inner iteration.
//    - optimal(): Cleaner and more straightforward with the use of flags (`f`) and explicit conditions, making the logic easier to follow.

// Mistakes in solve():
// 1. Overuse of variables: The use of `ans` and `j` can be replaced with simpler constructs for clarity.
// 2. Suboptimal loop structure: The `while` loop could be more naturally expressed as a `for` loop, improving readability and consistency with competitive programming conventions.

// Key learning points:
// 1. Optimize nested loop logic for readability by using clear constructs (e.g., `for` loops and flags).
// 2. Minimize unnecessary variables to make the code more concise and reduce potential for errors.
// 3. Ensure clarity in condition checking, as it can simplify debugging and improve the maintainability of the code.
