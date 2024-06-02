#include <bits/stdc++.h>
using namespace std;
#define ll long long

void getPrime(ll p, map<ll, ll>& ma) { 
    while (p % 2 == 0) {
        ma[2]++;
        p /= 2;
    }
    for (ll i = 3; i <= sqrt(p); i += 2) {
        while (p % i == 0) {
            ma[i]++;
            p /= i;
        }
    }
    if (p > 1) {
        ma[p]++;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--) {
        map<ll, ll> ma;
        ll n, b, f = 0;
        cin >> n;
        for (ll i = 0; i < n; i++) {
            cin >> b;
            getPrime(b, ma);
        }
        for (const auto& it : ma) {
            if (it.second % n != 0) {
                f = 1;
                break;
            }
        }
        if (f == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}