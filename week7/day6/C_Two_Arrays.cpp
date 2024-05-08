#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n + 1), b(n + 1);
        
        for (int k = 1; k <= n; k++)
            cin >> a[k];
        
        for (int k = 1; k <= n; k++)
            cin >> b[k];
        
        sort(a.begin() + 1, a.end());
        sort(b.begin() + 1, b.end());
        
        bool fail = false;
        
        for (int k = n; k >= 1; k--) {
            if (a[k] != b[k] && a[k] != b[k] - 1) {
                fail = true;
                break;
            }
        }
        
        if (fail)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}
