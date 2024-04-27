#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    sort(a.begin(), a.end());

    int q;
    cin >> q;

    while (q--) {
        int x, y;
        cin >> x >> y;

        int left = lower_bound(a.begin(), a.end(), x) - a.begin();
        int right = upper_bound(a.begin(), a.end(), y) - a.begin();

        cout << right - left << " ";
    }

    return 0;
}
