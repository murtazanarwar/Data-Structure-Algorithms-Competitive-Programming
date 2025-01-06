#include<bits/stdc++.h>
using namespace std;
typedef long long LL;

int main()
{
    int t;
    scanf("%d", &t);
    LL a, b, ans;
    while (t--)
    {
        scanf("%lld %lld", &a, &b);
        if (__gcd(a, b) == 1)
            ans = a*b - a - b + 1;
        else
            ans = -1;
        printf("%lld\n", ans);
    }
    return 0;
}