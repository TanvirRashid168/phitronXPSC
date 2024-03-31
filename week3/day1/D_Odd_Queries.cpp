#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long t;
    cin >> t;

    while (t--) {
        long long n, q;
        cin >> n >> q;
        vector<long long> v(n);
        vector<long long> p_sum(n + 1); 

        for (long long i = 0; i < n; i++) { 
            cin >> v[i];
            p_sum[i + 1] = p_sum[i] + v[i];
        }

        while (q--) {
            long long l, r, k;
            cin >> l >> r >> k;

            int remove = p_sum[r] - p_sum[l - 1];
            int sub_part = p_sum[n] - remove;
            int add_part = (r - l + 1) * k;

            int total_sum = sub_part + add_part;

            if (total_sum % 2 != 0) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }

    return 0;
}
