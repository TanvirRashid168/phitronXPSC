#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    long long testCase;
    cin >> testCase;
    while (testCase--) {
        ll n, q;
        cin >> n >> q;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++) {
            cin >> v[i];
        }
        vector<pair<ll, ll>> query(q);
        vector<ll> ans(q);
        ll sum = 0;
        for (ll i = 0; i < q; i++) {
            cin >> query[i].first;
            query[i].second = i;
        }
        sort(query.begin(), query.end());
        ll pos = 0;
        for (ll i = 0; i < q; i++) {
            while (pos < n && v[pos] <= query[i].first) {
                sum += v[pos];
                pos++;
            }
            ans[query[i].second] = sum;
        }
        for (auto x : ans) {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}