#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin >> q;
    while(q--) {
        long long a, b, n, s;
        cin >> a >> b >> n >> s;

        long long x = min(s / n, a);
        s -= x * n;

        if(s <= b) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}