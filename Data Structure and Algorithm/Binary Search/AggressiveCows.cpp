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

bool countCowPlacement(vector<int>& locations, int dis, int required){
    int cows = 1; int last = locations[0]; int n = locations.size();
    for(int i = 1; i < n; i++){
        if(locations[i] - last >= dis){
            cows++;
            last = locations[i];
        }
        if( cows >= required ) return true;
    }
    return false;
}

void solve() {
    int n, c;
    scanf("%d %d",&n, &c);
    vector<int> locations(n);
    for(int i = 0; i < n; i++){
        scanf("%d", &locations[i]);
    }
    sort(locations.begin(), locations.end());
    int low = 1;
    int high = locations[n-1] - locations[0];
    while( low <= high ){
        int mid = ( low + high ) / 2;
        if(countCowPlacement(locations, mid, c)){
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    cout<<high;
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