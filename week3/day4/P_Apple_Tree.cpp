#include <bits/stdc++.h>
using namespace std;

const int N = 200005;

vector<int> v[N];
int cnt[N];


void dfs(int src, int parent) {
   if(v[src].size() == 1 && src != 1) cnt[src] = 1;
    for (int child : v[src]) {
        if (child != parent) {
            dfs(child, src);
            cnt[src] += cnt[child];
        }
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        for (int i = 1; i <= n; ++i) {
            v[i].clear();
            cnt[i] = 0;
        }

        for (int i = 0; i < n - 1; ++i) {
            int a, b;
            cin >> a >> b;
            v[a].push_back(b);
            v[b].push_back(a);
        }

        dfs(1, -1);

        int q;
        cin >> q;
        while (q--) {
            int x, y;
            cin >> x >> y;
            long long ans = 1LL * cnt[x] * cnt[y];
            cout << ans << endl;
        }
    }
    return 0;
}
