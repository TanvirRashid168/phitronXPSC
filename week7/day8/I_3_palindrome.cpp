#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    while (cin >> n) {
        for (int i = 1; i <= n; ++i) {
            cout << "a";
            ++i;
            if (i <= n)
                cout << "a";
            ++i;
            if (i <= n)
                cout << "b";
            ++i;
            if (i <= n)
                cout << "b";
        }
        cout << endl;
    }
    return 0;
}