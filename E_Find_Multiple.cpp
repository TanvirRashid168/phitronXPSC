#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int ans = -1;
    int i = 1;

    while (c * i <= b) {
        if (c * i >= a && c*i <= b) {
            ans = c * i;
            break;
        }
        i++;
    }

    cout << ans << endl;

    return 0;
}
