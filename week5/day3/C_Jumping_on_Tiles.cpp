#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        int n = s.size();
        vector<pair<char, int>> order;
        char mn = min(s[0], s[n - 1]);
        char mx = max(s[0], s[n - 1]);

        for (int i = 0; i < n; i++) {
            if (s[i] >= mn && s[i] <= mx) {
                order.push_back({s[i], i});
            }
        }

        if (order.size() > 2) {
            sort(order.begin() + 1, order.end() - 1, [&](pair<char, int> a, pair<char, int> b) {
                if (s[0] > s[n - 1]) {
                    return a.first > b.first;
                }
                return a.first < b.first;
            });
        }
        
        vector<int> seq;
        int moves = 0;
        seq.push_back(1);
        for (int i = 1; i < order.size(); i++) {
            moves += abs(order[i - 1].first - order[i].first);
            seq.push_back(order[i].second + 1);
        }

        cout << moves << " " << seq.size() << endl;
        for (auto i : seq) {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}
