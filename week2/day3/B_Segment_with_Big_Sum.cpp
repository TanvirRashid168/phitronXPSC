#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, s;
    cin >> n >> s;
    vector<int> v(n);

    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int r = 0, l = 0, sum = 0, min_length = INT_MAX;

    while (r < n) {
        sum += v[r];
        while (sum >= s && l<=r) {
            min_length = min(min_length, r - l + 1);
            sum -= v[l++];
        }
        r++;
    }

    if(min_length == INT_MAX) {
        cout << -1 << endl;
    } else {
        cout << min_length << endl;
    }

    return 0;
}
