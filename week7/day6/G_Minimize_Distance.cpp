#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void productOfSubsetSums(ll arr[], ll n, ll mod) {
    ll ans = 1;
    for (int i = 0; i < n; ++i )
        ans = ((ans % mod) * ((arr[i] + 1) % mod)) % mod;
    cout << ans - 1;
}

void asquare() {
    ll n, k;
    cin >> n >> k;
    ll arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    vector<ll> v, w;
    for (int i = 0; i < n; ++i) {
        if (arr[i] < 0) w.push_back(arr[i] * (-1));
        else if (arr[i] > 0) v.push_back(arr[i]);
    }
    sort(v.begin(), v.end());
    sort(w.begin(), w.end());
    ll ans = 0, a = 0, b = 0;
    if (!v.empty()) {
        if (v.size() < k) {
            a = v[v.size() - 1];
            ans += a;
        }
        else {
            a = v[v.size() - 1];
            for (int i = 0; i < v.size(); ++i) {
                if (i == v.size() - 1) {
                    ans += v[i];
                }
                else if ((v.size() - i - 1) % k == 0) {
                    ans += v[i] * 2;
                }
            }
        }
    }
    if (!w.empty()) {
        if (w.size() < k) {
            b = w[w.size() - 1];
            ans += b;
        }
        else {
            b = w[w.size() - 1];
            for (int i = 0; i < w.size(); ++i) {
                if (i == w.size() - 1) {
                    ans += w[i];
                }
                else if ((w.size() - i - 1) % k == 0) {
                    ans += w[i] * 2;
                }
            }
        }
    }
    ans += min(a, b);
    cout << ans << "\n";
}

int main() {
    ll t;
    cin >> t;
    while (t--) {
        asquare();
    }
    return 0;
}