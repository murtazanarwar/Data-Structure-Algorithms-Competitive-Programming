#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int a[n];
    int cnt = 0, ans = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i] == 0)
        {
            cnt++;
        }
        else
        {
            ans = max(ans, cnt);
            cnt = 0;
        }
    }
    cout << max(ans, cnt) << endl;
}

int32_t main(){
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}