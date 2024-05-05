#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, a, b;
    cin >> n >> a >> b;
    
    int l = 1, r = min(a, b);
    int ans = 1;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (a / mid + b / mid >= n) {
            l = mid + 1;
            ans = mid;
        } else {
            r = mid - 1;
        }
    }
    cout << ans << endl;
    return 0;
}