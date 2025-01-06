#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m; cin>>n>>m;
    vector<int> charCounts(n);
    for(int i = 0; i < n; i++){
        string temp; cin>>temp;
        charCounts[i] = temp.length();
    }

    int chars = 0, count = 0;
    for(int i = 0; i < n; i++){
        if( chars + charCounts[i] > m) break;
        chars += charCounts[i];
        count++;
    }

    cout<<count<<'\n';
}

void optimal(){
    int n, m; cin>>n>>m;
    vector<string> a(n);
    for(auto &i: a) cin>>i;

    long long x = 0;
    for(int i = 0; i < n; i++){
        if(a[i].length() <= m){
            m -= a[i].length();
            x++;
        } else {
            break;
        }
    }
    cout<<x<<'\n';
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        optimal();
    }
    return 0;
}

// Comparison
// solve() Function:
// - Approach: Uses a vector to store string lengths, processes in two steps.
// - Time Complexity: O(2n) - Two loops: one for storing lengths, another for processing.
// - Space Complexity: O(n) - Extra vector for string lengths.
// - Readability: Verbose due to redundant steps.
// - Mistakes: Redundant use of vector, splits processing, risks indexing bugs.
// 
// optimal() Function:
// - Approach: Directly processes lengths during input reading.
// - Time Complexity: O(n) - Single loop for input and processing.
// - Space Complexity: O(1) - No extra storage.
// - Readability: Compact and direct.
// 
// Mistakes:
//   1. Redundant use of `vector`, increasing space complexity.
//   2. Separates input handling and processing into multiple loops.
//   3. Potential indexing errors due to intermediate storage.
//
// Key Learnings:
// - Combine input handling and processing in one loop.
// - Avoid unnecessary intermediate storage.
// - Aim for compact, efficient, and clear logic.
