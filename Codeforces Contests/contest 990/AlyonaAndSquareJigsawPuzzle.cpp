#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int currentLayer = 0;
        int piecesInLayer = 0;
        int requiredPieces = 1;
        int happyDays = 0;

        for (int i = 0; i < n; i++) {
            piecesInLayer += a[i];

            while (piecesInLayer >= requiredPieces) {
                piecesInLayer -= requiredPieces;
                currentLayer++;
                requiredPieces = 8 * currentLayer;
            }

            if (piecesInLayer == 0) {
                happyDays++;
            }
        }
        cout << happyDays << '\n';
    }
}

void optimal(){
    int tt; cin>>tt;
    while(tt--){
        int n, answer = 0; cin>>n;
        vector<int> a(n);
        for(auto &i: a) cin>>i;

        for(int i = 0, j = 1, sum = 0; i < n; i++){
            sum += a[i];
            while(j * j < sum) j += 2;
            answer += ( sum == j * j );
        }
        cout<<answer<<'\n';
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    // solve();
    optimal();
    return 0;
}
