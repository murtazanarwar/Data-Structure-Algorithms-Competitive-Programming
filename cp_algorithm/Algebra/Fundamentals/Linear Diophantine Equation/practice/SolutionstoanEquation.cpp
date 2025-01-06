#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// Reads two integers and prints their sum
void basicIO() {
    ll a, b;
    cin >> a >> b;
    cout << a + b << endl;
}

ll gcd(ll a, ll b, ll& x, ll& y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    ll x1, y1;
    ll d = gcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - y1 * (a / b);
    return d;
}

bool find_any_solution(ll a, ll b, ll c, ll &x0, ll &y0, ll &g) {
    g = gcd(abs(a), abs(b), x0, y0);
    if (c % g) {
        return false;
    }

    x0 *= c / g;
    y0 *= c / g;
    if (a < 0) x0 = -x0;
    if (b < 0) y0 = -y0;
    return true;
}

void shift_solution(ll &x, ll &y, ll a, ll b, ll cnt) {
    x += cnt * b;
    y -= cnt * a;
}

ll find_all_solutions(ll a, ll b, ll c, ll minx, ll maxx, ll miny, ll maxy) {
    ll x, y, g;
    if (!find_any_solution(a, b, c, x, y, g))
        return 0;
    a /= g;
    b /= g;

    ll sign_a = a > 0 ? +1 : -1;
    ll sign_b = b > 0 ? +1 : -1;

    shift_solution(x, y, a, b, (minx - x) / b);
    if (x < minx)
        shift_solution(x, y, a, b, sign_b);
    if (x > maxx)
        return 0;
    ll lx1 = x;

    shift_solution(x, y, a, b, (maxx - x) / b);
    if (x > maxx)
        shift_solution(x, y, a, b, -sign_b);
    ll rx1 = x;

    shift_solution(x, y, a, b, -(miny - y) / a);
    if (y < miny)
        shift_solution(x, y, a, b, -sign_a);
    if (y > maxy)
        return 0;
    ll lx2 = x;

    shift_solution(x, y, a, b, -(maxy - y) / a);
    if (y > maxy)
        shift_solution(x, y, a, b, sign_a);
    ll rx2 = x;

    if (lx2 > rx2)
        swap(lx2, rx2);
    ll lx = max(lx1, lx2);
    ll rx = min(rx1, rx2);

    if (lx > rx)
        return 0;
    return (rx - lx) / abs(b) + 1;
}

int main() {
    ll t;
    cin >> t;
    for (ll n = 1; n <= t; n++) {
        cout << "Case " << n << ": ";
        ll a, b, c, lx, rx, ly, ry;
        cin >> a >> b >> c >> lx >> rx >> ly >> ry;
        c = -c;

        if(a==0 && b==0 && c==0) cout<<(rx-lx+1)*(ry-ly+1)<<'\n';    //Trival Case
        else if(a==0 && b==0) cout<<0<<'\n';
        else if(a==0){                                              //only a is 0, By=C
            if(c%b!=0 || ly>c/b || ry<c/b) cout<<0<<'\n';
            else cout<<(rx-lx+1)<<'\n';                             //All x satifies
        }
        else if(b==0){                                              //Ax=C, same thing as above.
            if(c%a!=0 || lx>c/a || rx<c/a) cout<<0<<'\n';
            else cout<<(ry-ly+1)<<'\n';
        }

        else cout<<find_all_solutions(a, b, c, lx,rx, ly, ry)<<'\n'; 
    }
    return 0;
}