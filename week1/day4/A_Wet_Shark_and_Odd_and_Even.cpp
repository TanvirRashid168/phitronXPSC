#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n;
    cin >> n;
    vector<long long> v(n);
    for(long long i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    long long val = 0;
    for(long long i = 0; i < n; i++) {
        val += v[i];
    }

    if(val % 2 == 0) {
        cout << val << endl;
    } else {
        long long x = 0;
        for(long long i = 0; i < n; i++) {
            if(v[i] % 2 != 0) {
                x = v[i];
                break;
            }
        }
        cout << val - x << endl;
    }

    return 0;
}