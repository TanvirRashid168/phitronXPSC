#include <bits/stdc++.h>
using namespace std;
void solve() {
    int t;
    cin >> t;
    vector<int> results(t);

    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;
        results[i] = n / 2;
    }

    for (const auto& result : results) {
        cout << result << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
    
    return 0;
}