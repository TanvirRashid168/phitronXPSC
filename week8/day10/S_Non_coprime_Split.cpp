#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll getSmallestPrimeFactor(ll n) {
    if (n % 2 == 0) return 2;
    for (ll i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) return i;
    }
    return n;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll t;
    cin >> t;
    while (t--) {
        ll l, r;
        cin >> l >> r;
        
        if (r <= 3) {
            cout << -1 << endl;
        } else if (l == r) {
            ll prime = getSmallestPrimeFactor(l);
            if (prime == l) {
                cout << -1 << endl;
            } else {
                cout << prime << " " << l - prime << endl;
            }
        } else {
            if (r % 2 != 0) {
                r--;
            }
            cout << 2 << " " << r - 2 << endl;
        }
    }
    
    return 0;
}
