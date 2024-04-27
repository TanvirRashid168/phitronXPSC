#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int l = 0, r = n - 1, mid, idx;

    while (k--) {
        int key;
        cin >> key;
        l = 0; 
        r = n - 1;
        idx = n; 

        while (l <= r) {
            mid = (l + r) / 2;

            if (key <= a[mid]) {
                idx = mid;
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }

        cout << idx + 1 << endl;
    }

    return 0;
}
