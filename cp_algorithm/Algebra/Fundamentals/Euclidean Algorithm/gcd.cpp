#include<bits/stdc++.h>
using namespace std;

//STL
int gcd ( int a , int b ){
    return __gcd(a,b);
}

//Implementation
int gcd1 (int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd1 (b, a % b);
}

//Usinh Ternary Operator
int gcd2 (int a, int b) {
    return b ? gcd2 (b, a % b) : a;
}

//Non Recursive
int gcd3 (int a, int b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

//Binary GCD
int binaryGCD(int a, int b) {
    if (!a || !b)
        return a | b;
    unsigned shift = __builtin_ctz(a | b);
    a >>= __builtin_ctz(a);
    do {
        b >>= __builtin_ctz(b);
        if (a > b)
            swap(a, b);
        b -= a;
    } while (b);
    return a << shift;
}

int lcm (int a, int b) {
    return a / gcd(a, b) * b;
}

int main() {
    int a = 100;
    int b = 4;
    
    int gcdAns = gcd(a,b);
    int lcmAns = lcm(a,b);
    cout<<"GCD is "<<gcdAns<<"\n";
    cout<<"LCM is "<<lcmAns<<"\n";
    return 0;
}