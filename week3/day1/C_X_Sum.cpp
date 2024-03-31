#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;

        int arr[n][m];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
               cin >> arr[i][j];
            }
        }

        int maxsum = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int sum = arr[i][j];
                int x1 = i, y1 = j;
                while (x1 > 0 && y1 > 0) {
                    sum += arr[--x1][--y1];
                }
                int x2 = i, y2 = j;
                while (x2 > 0 && y2 < m - 1) {
                    sum += arr[--x2][++y2];
                }
                int x3 = i, y3 = j;
                while (x3 < n - 1 && y3 > 0) {
                    sum += arr[++x3][--y3];
                }
                int x4 = i, y4 = j;
                while (x4 < n - 1 && y4 < m - 1) {
                    sum += arr[++x4][++y4];
                }

                maxsum = max(sum, maxsum);
            }
        }

        cout << maxsum << endl;
    }

    return 0;
}
