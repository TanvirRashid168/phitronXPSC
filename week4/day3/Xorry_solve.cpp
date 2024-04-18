#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        for (int i = 31; i >= 0; i--) {
            if (x & (1 << i)) {
                cout << (x - (1 << i)) << " " << (1 << i) << endl;
                break;
            }
        }
    }
    return 0;
}
