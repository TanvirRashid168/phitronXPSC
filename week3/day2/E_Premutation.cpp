#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int arr[n][n - 1];
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - 1; j++) {
                cin >> arr[i][j];
            }
        }

        map<int, int> mp;

        for (int i = 0; i < n; i++) {
            mp[arr[i][0]]++;
        }
        int max_freq = 0;
        for (auto it : mp) {
            max_freq = max(max_freq, it.second);
        }
        int max_val = 0;
        for (auto it : mp) {
            if (it.second == max_freq) {
                max_val = it.first;
                break; 
            }
        }
        int missing_row = -1;
        for (int i = 0; i < n; i++) {
            if (arr[i][0] != max_val) {
                missing_row = i;
                break; 
            }
        }

        
        cout << max_val << " ";
        for (int j = 0; j < n - 1; j++) {
            cout << arr[missing_row][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
