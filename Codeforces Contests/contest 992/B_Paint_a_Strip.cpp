#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin>>n;
    if(n == 1 || n == 2){
        cout<<n<<'\n';
        return;
    }
    int ans = 1;
    int sum = 1;
    int r = 1;
    while(r < n){
        sum = r + 1;
        r = sum * 2;
        ans += 1;
    }
    cout<<ans<<'\n';
}

int ans[100005];

void optimal() {
    int n;
    cin >> n;
    cout << ans[n] << '\n';
} // 1
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    ans[1] = 1;
    int x = 1, j = 2;
    for (int i = 2; j <= 1e5; i++) {
        x = x * 2 + 2;
        while (j <= x && j <= 1e5) {
            ans[j] = i;
            j++;
        }
    }

    int t; cin >> t;
    while(t--) {
        optimal();
    }
    return 0;
}

// Comparison of solve() and optimal():
// 1. Efficiency:
//    - solve(): O(log(n)) complexity per query, recomputes for each test case, making it less     efficient for large inputs or multiple queries.
//    - optimal(): Precomputes results in O(n) and allows O(1) query time, which is optimal for competitive programming with multiple test cases.
// 2. Correctness:
//    - solve(): Incorrect logic in the while loop. The progression of `sum` and `r` does not correctly calculate the sequence of operations required to determine the answer.
//    - optimal(): Correctly precomputes answers for all `n` in the given range, ensuring accurate and consistent results.
// 3. Clarity:
//    - solve(): Uses unclear variable names (`sum`, `r`) and misleads about the logic of the sequence calculation.
//    - optimal(): Divides logic into preprocessing and query phases, making the approach easy to understand and maintain.

// Mistakes in solve():
// 1. Incorrect progression logic: The update of `sum` and `r` does not match the intended formula for the series.
// 2. Inefficiency for multiple test cases: Does not leverage precomputation, resulting in redundant calculations for every input.
// 3. Lacks scalability: While the logic may handle small inputs, it cannot handle constraints effectively due to repeated computations.

// Key learning points:
// 1. Leverage precomputation to optimize performance for multiple test cases.
// 2. Debug the iterative logic carefully to ensure it aligns with the problem statement.
// 3. Use descriptive variable names and avoid unnecessary intermediate steps to improve code clarity and maintainability.
