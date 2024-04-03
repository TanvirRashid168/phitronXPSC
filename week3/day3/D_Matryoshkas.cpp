#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        map<int, int> mp;

        for (int i = 0; i < n; i++) {
            cin >> v[i];
            mp[v[i]]++;
        }

        int ans = 0;
        int last = -1, last_count = 0;
        
        for (auto it = mp.begin(); it != mp.end(); ++it) {
            int key = it->first;
            int count = it->second;
            
            if (last != -1 && key != last + 1) {
                ans += count;
            } else {
                ans += max(0, count - last_count);
            }

            last = key;
            last_count = count;
        }

        cout << ans << endl;
    }

    return 0;
}
