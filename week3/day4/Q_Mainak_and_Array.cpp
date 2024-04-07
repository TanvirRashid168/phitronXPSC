#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        vector<long long> v(n);
        for (long long i = 0; i < n; i++) {
            cin >> v[i];
        }

        if (n == 1) {
            cout << 0 << endl;
            continue;
        }

        long long ans = v[n - 1] - v[0];

        for (long long i = 1; i <= n-1; i++) {
            ans = max(ans, (v[i] - v[0]));
        }

        for (long long i = 0; i <= n - 2; i++) {
            ans = max(ans, (v[n - 1] - v[i]));
        }

        for (long long i = 1; i <=n-1 ; i++) {
            ans = max(ans, (v[i - 1] - v[i]));
        }

        cout << ans << endl;
    }

    return 0;
}
