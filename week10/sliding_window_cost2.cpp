#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>

#define ll long long
using namespace __gnu_pbds;
using namespace std;

template<typename T> 
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main() {
    ll n, k;
    cin >> n >> k;

    vector<ll> v(n);
    for (ll i = 0; i < n; i++) {
        cin >> v[i];
    }

    pbds<pair<ll, ll>> p;
    ll left_sum = 0, right_sum = 0;

    for (ll r = 0; r < n; r++) {
        p.insert({v[r], r});

        if (p.size() == k) {
            ll mid = (k - 1) / 2;
            ll median = p.find_by_order(mid)->first;

            left_sum = 0;
            right_sum = 0;
            
            for (ll i = 0; i <= mid; i++) {
                left_sum += p.find_by_order(i)->first;
            }

            for (ll i = mid + 1; i < k; i++) {
                right_sum += p.find_by_order(i)->first;
            }

            ll left_count = mid + 1;
            ll right_count = k - left_count;
            ll cost = right_sum - right_count * median + left_count * median - left_sum;

            cout << cost << " ";
            p.erase({v[r - k + 1], r - k + 1});
        }
    }

    return 0;
}
