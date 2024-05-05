#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k;
    cin >> n >> k;

    vector<ll> a(n);
    for(ll i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    ll l = a[n/2], r = 2e9;
    while(l < r) {
        ll mid = (l + r + 1) / 2;
        ll ops = 0;
        for(ll i = n/2; i < n; i++) {
            if(a[i] < mid) {
                ops += mid - a[i];
            }
        }

        if(ops <= k) {
            l = mid;
        } else {
            r = mid - 1;
        }
    }

    cout << l << "\n";

    return 0;
}