#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    long long sum = 0;
    
    for (auto &i: a) {
        cin>>i;
        sum+=i;
    }
    
    if (sum % n != 0) {
        cout << "NO" << '\n';
        return;
    }
    
    long long target = sum / n;
    vector<long long> diff(n);
    
    for (int i = 0; i < n; i++) {
        diff[i] = a[i] - target;
    }
    
    long long even = 0;
    long long odd = 0;
    for(int i = 0; i < n; i++){
        if(i % 2 == 0) even += diff[i];
        else odd += diff[i];
    }
    
    if (even == 0 && odd == 0) {
        cout << "YES" << '\n';
    } else {
        cout << "NO" << '\n';
    }
}

void optimal(){
    int n; cin >> n;
    vector<long long> a(n);
    long long Esum = 0;
    long long Osum = 0;
    bool even = true;
    
    for (auto &i: a) {
        cin>>i;
        if(even){
            Esum += i;
        } else {
            Osum += i;
        }
        even = !even;
    }

    long long odd_places = n / 2;
    long long even_places = ( n + 1 ) / 2;
    
    if(Esum % even_places == 0 && Osum % odd_places == 0 && Esum / even_places == Osum / odd_places){
        cout << "YES" << '\n';
    } else {
        cout << "NO" << '\n';
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        optimal();
    }
    return 0;
}


// Comparison
// solve() Function:
// - Approach: Calculates differences from target and sums differences based on even and odd indices.
// - Time Complexity: O(n) - Separate loops for calculating differences and summing even/odd.
// - Space Complexity: O(n) - Extra vector for differences.
// - Readability: More verbose with unnecessary complexity in managing differences and summing.
//
// optimal() Function:
// - Approach: Efficiently computes the sum of values in even and odd positions during input.
// - Time Complexity: O(n) - Single loop for input and processing.
// - Space Complexity: O(1) - No extra space needed.
// - Readability: More concise and efficient.
//
// Mistakes:
//   1. Redundant space for storing differences.
//   2. Unnecessary complexity with multiple loops.
//   3. Potential inefficiencies due to handling differences and sums separately.
//
// Key Learnings:
// - Process data inline during input to reduce space and complexity.
// - Minimize the number of loops to improve performance.
// - Use direct computations to streamline logic and enhance readability.
