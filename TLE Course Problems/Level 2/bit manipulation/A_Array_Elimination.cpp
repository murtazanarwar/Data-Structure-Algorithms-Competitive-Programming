#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (int)(n); i ++)
#define rep1(i, n) for(int i = 1; i <= (int)(n); i ++)
#define MP make_pair
 
using namespace std;
typedef long long LL;
typedef pair<int, int> PII;
const int MOD = 998244353;
 
int gcd(int x, int y)
{
	return y == 0 ? x : gcd(y, x % y);
}
void solve()
{
	int n; cin>>n;
	vector<int> a(n);
	for(auto &i: a) cin>>i; 
	vector<int> c(30, 0);

	//frequency of each bit should be divisible by k
	for(int i = 0; i < n; i++){
		for(int j = 0; j < 30; j++){
			if((a[i] >> j) & 1) c[j]++;
		}
	}

	int r = 0;
	for(int i = 0; i < 30; i++){
		r = gcd(r, c[i]);
	}

	//all the divisors of r, will also divide all the frequency, and so those are the Ks
	for(int i = 1; i <= n; i++){
		if(r % i == 0) cout<<i<<" ";
	}
	cout<<'\n';
}
 
int main()
{
	int T;
	scanf("%d", &T);
	while(T --) solve();
	return 0;
}