#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin>>t;
    while(t--){
        int n,a,b,c;
        cin>>n>>a>>b>>c;
        if( n <= a ){
            cout<<1<<'\n';
            continue;
        }else if( n - a <= b ){
            cout<<2<<'\n';
            continue;
        }else if( n - a - b <= c ){
            cout<<3<<'\n';
            continue;
        }
        long long sum = a + b + c;
        int days = n / sum;
        if( days * sum == n ){
            cout<< days * 3 <<'\n'; 
            continue;   
        }
        n = n - ( days * sum );
        days = days * 3;
        if( n <= a ){
            cout<<days + 1<<'\n';
            continue;
        }else if( n - a <= b ){
            cout<<days + 2<<'\n';
            continue;
        }else if( n - a - b <= c ){
            cout<<days + 3<<'\n';
            continue;
        }
    }
    return 0;
}