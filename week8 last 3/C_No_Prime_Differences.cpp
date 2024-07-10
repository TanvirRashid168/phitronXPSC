#include <bits/stdc++.h>
using namespace std;

const int N = 1010;

int ans[N][N];

void solve() {
    int n, m;
    scanf("%d %d", &n, &m);
    for (int i = 1, k = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            ans[i][j] = k++;
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (i & 1)
                printf("%d ", ans[n / 2 + (i + 1) / 2][j]);
            else
                printf("%d ", ans[i >> 1][j]);
        }
        printf("\n");
    }
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        solve();
    }
    
    return 0;
}
