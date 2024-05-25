#include <bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin >> n;
    
    vector<int> a(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }

    for (int i = 1; i <= n; ++i) {
        bool divisible = true;
        
        for (int j = 2; j <= i + 1; ++j) {
            if (a[i] % j != 0) {
                divisible = false;
                break;
            }
        }

        if (divisible) {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}