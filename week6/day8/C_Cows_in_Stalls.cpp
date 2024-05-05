#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n, k;
vector<ll> a;

bool check(ll mid) {
    ll cnt = 1, last = a[0];
    for (ll i = 1; i < n; i++) {
        if (a[i] - last >= mid) {
            cnt++;
            last = a[i];
        }
    }
    return cnt >= k;
}

int main() {
    cin >> n >> k;
    a.resize(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    ll l = 0, r = 1e10;
    while (l < r) {
        ll mid = (l + r + 1) / 2;
        if (check(mid)) l = mid;
        else r = mid - 1;
    }
    cout << l << endl;
    return 0;
}