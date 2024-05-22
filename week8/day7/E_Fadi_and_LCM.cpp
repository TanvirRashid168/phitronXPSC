#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll gcd(ll m, ll n) {
    if (n == 0) {
        return m;
    }
    return gcd(n, m % n);
}

ll lcm(ll m, ll n) {
    return (m * n) / gcd(m, n);
}

int main() {
    ll x;
    cin >> x;

    ll maxDivisor = 0;

    for (ll i = 1; i * i <= x; ++i) {
        if (lcm(i, x / i) == x && gcd(i, x / i) == 1) {
            if (i > maxDivisor) {
                maxDivisor = i;
            }
        }
    }

    cout << maxDivisor << " " << x / maxDivisor << endl;

    return 0;
}