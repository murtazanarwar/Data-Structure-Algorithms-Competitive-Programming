#include<bits/stdc++.h>
using namespace std;

bool solutionExist( int a, int b, int c ){
    if( c % __gcd(a,b) == 0 ){
        return true;
    }
    return false;
}

int main() {
    int t;
    cin>>t;
    int n = 1;
    int a,b,c;
    while( n <= t ){
        scanf("%d %d %d",&a,&b,&c);
        if(solutionExist(a,b,c)){
            cout<<"Case "<<n<<": Yes";
        } else {
            cout<<"Case "<<n<<": No";
        }
        cout<<'\n';
        n++;
    }
}