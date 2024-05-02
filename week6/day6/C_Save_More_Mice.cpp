#include <bits/stdc++.h>
#define ll long long
using namespace std;

void calculate() {
    ll n, k, x;
    cin >> n >> k;
    ll mpp[k];
    for(int i = 0; i < k; i++) {
        cin >> mpp[i];
    }
    sort(mpp, mpp + k);
    ll c = 0;
    ll ans = 0;
    for(int ii = k - 1; ii >= 0; ii--) {
        ll i = mpp[ii];
        if(i <= c) break;
        ll d = n - i;
        c += d;
        ans++;
    }
    cout << ans << "\n";
}

int main() {
    ll t;
    cin >> t;
    while(t--) {
        calculate();
    }
    return 0;
}
