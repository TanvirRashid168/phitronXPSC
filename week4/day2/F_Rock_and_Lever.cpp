#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        map<int, int> cnt;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            cnt[__lg(a[i])]++;
        }

        long long ans = 0;

        for (auto x : cnt) {
            int y = x.second;
            ans += (1LL * y * (y - 1) / 2);
        }

        cout << ans << endl;
    }

    return 0;
}
