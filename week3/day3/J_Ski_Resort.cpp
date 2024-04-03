#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    
    while (t--) {
        long long n, k, q;
        cin >> n >> k >> q;
        vector<long long> v(n);
        for (long long i = 0; i < n; i++) {
            cin >> v[i];
        }

        long long current_count = 0;
        long long ans = 0;

        for (long long i = 0; i < n; i++) {
            if (v[i] <= q) {
                current_count++;
                if (current_count >= k) {
                    ans += (current_count - k + 1);
                }
            } else {
                current_count = 0;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
