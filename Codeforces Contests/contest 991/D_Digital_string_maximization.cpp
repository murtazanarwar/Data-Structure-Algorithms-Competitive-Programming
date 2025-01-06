#include <bits/stdc++.h>
using namespace std;

bool pass(string &s)
{
    int n = s.length();
    int count = 0;
    for (int i = n - 1; i > 0; i--)
    {
        int a = s[i - 1] - '0';
        int b = s[i] - '0';
        if (b != 0 && a < b - 1)
        {
            count++;
            s[i - 1] = '0' + (b - 1);
            s[i] = '0' + a;
        }
    }
    return (count > 0);
}

void solve()
{
    string s;
    cin >> s;
    while (true)
    {
        if (!pass(s))
            break;
    }
    cout << s << '\n';
}

int optimal(){
    string s; cin >> s;
    int n = s.size();
    vector<int> digits(n);
    for (int i = 0; i < n; i++) digits[i] = s[i] - '0';

    for (int i = 1; i < n; i++){
        int index = i;
        while (index >= 1 && digits[index] > 0 && digits[index] > digits[index - 1] + 1){
            int val = digits[index];
            digits[index] = digits[index - 1];
            digits[index - 1] = val - 1;
            if (index > 1)
                index--;
            else
                break;
        }
    } // n * 10

    string res = "";
    for (int d : digits)
        res += to_string(d);
    cout << res << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        optimal();
    }
    return 0;
}

/*
Analysis of `solve()` and `optimal()` Functions:

1. **Logic**:  
   - `solve()`: Uses a `while (true)` loop with the `pass()` function to modify the string until no changes occur.  
   - `optimal()`: Directly manipulates the digits using a vector, avoiding repeated passes over the string.

2. **Time Complexity**:  
   - `solve()`: High (`O(n^2)` in the worst case) due to multiple string passes.  
   - `optimal()`: Efficient (`O(n)`) with single-pass digit manipulation and local swaps.

3. **Space Complexity**:  
   - `solve()`: `O(1)` as it modifies the string in place.  
   - `optimal()`: `O(n)` due to the additional vector used for digit manipulation.

4. **Mistakes in `solve()`**:  
   - Inefficient handling of operations with unnecessary looping.  
   - Lack of a structured approach for managing digit swaps.  

5. **Key Learning Points**:  
   - Avoid redundant loops; strive for efficient, linear solutions.  
   - Use appropriate data structures like vectors for better control and performance.  
   - Plan and structure logic to minimize repeated operations.  

6. **Conclusion**:  
   `optimal()` is more efficient in both time and space and is the preferred solution for competitive programming scenarios.
*/
