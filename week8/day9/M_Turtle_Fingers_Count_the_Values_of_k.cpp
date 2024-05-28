#include <bits/stdc++.h>
using namespace std;

#define ll long long

void asquare() {
    ll a, b, l;
    cin >> a >> b >> l;
    ll ans = 0;

    if (a == b) {
        ll y = 0;
        while (l % b == 0) {
            l /= b;
            y++;
        }
        cout << y + 1 << "\n"; 
        return;
    }

    set<ll> k;
    ll x = 0;

    while (true) {
        ll power_a_x = pow(a, x);
        if (power_a_x > l) break;
        if (l % power_a_x != 0) break;

        ll curr = l / power_a_x;
        k.insert(curr);

        while (curr % b == 0) {
            curr /= b;
            k.insert(curr);
        }
        x++;
    }
    
    cout << k.size() << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll t;
    cin >> t;
    while (t--) {
        asquare();
    }
    return 0;
}
