#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

#define F first
#define S second
#define PB push_back
#define MP make_pair

const int INF = 1e9 + 5;
const int MOD = 1e9 + 7;

void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int emptyCell = 0;
    int cnt = 0;
    for( char c : s ){
        if( c == '.' ){
            emptyCell++; cnt++;
        } else {
            cnt = 0;
        }
        if( cnt == 3 ){
            cout<<"2\n";
            return;
        }
    }
    cout<<emptyCell<<'\n';
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