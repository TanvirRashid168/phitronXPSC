#include <bits/stdc++.h>
using namespace std;
int testCases, n, m, k;
vector<long long> a;
vector<char> x;

void solve(int t) {
    set<int> s;
    --k;
    s.insert(k);
    for (int i = 0; i < m; ++i) {
        set<int> s1;
        for (int j : s) {
            if (x[i] == '0' || x[i] == '?') {
                s1.insert((j + a[i]) % n);
            }
            if (x[i] == '1' || x[i] == '?') {
                s1.insert((j - a[i] + n) % n);
            }
        }
        s = s1;
    }
    cout << s.size() << endl;
    for (int i : s) {
        cout << (i + 1) << " ";
    }
    cout << endl;
}

int main() {
    cin >> testCases;
    for (int t = 0; t < testCases; ++t) {
        cin >> n >> m >> k;
        a.resize(m);
        x.resize(m);
        for (int i = 0; i < m; ++i) {
            cin >> a[i] >> x[i];
        }
        solve(t + 1);
    }
    return 0;
}