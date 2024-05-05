#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n), b(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++) {
        cin >> b[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    ll l = a[0] + b[0], r = a[n - 1] + b[n - 1];
    while (l < r) {
        ll mid = (l + r) / 2;
        ll cnt = 0;
        for (ll i = 0; i < n; i++) {
            cnt += upper_bound(b.begin(), b.end(), mid - a[i]) - b.begin();
        }
        if (cnt >= k) r = mid;
        else l = mid + 1;
    }
    cout << l << endl;
    return 0;
}