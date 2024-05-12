#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;

        vector<long long> a(n);

        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }

        vector<long long> freq(n + 2);

        for (int i = 0; i < n; i++) {
            if (a[i] > n) {
                continue;
            }

            freq[a[i]]++;
        }

        long long ans = 0;

        for (int i = 1; i <= n; i++) {
            long long here = 0;

            for (long long x = 1; x * x <= i; x++) { 
                if (i % x == 0) {
                    here += freq[x];

                    if (x * x != i) {
                        here += freq[i / x];
                    }
                }
            }

            ans = max(ans, here);
        }

        cout << ans << endl;
    }

    return 0;
}
