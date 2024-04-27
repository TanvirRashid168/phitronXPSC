#include <bits/stdc++.h>
using namespace std;
int main() {
    int case_number = 1;
    while (true) {
        int n, q;
        cin >> n >> q;
        if (n == 0 && q == 0)
            break;

        vector<int> marbles(n);
        for (int i = 0; i < n; ++i) {
            cin >> marbles[i];
        }

        sort(marbles.begin(), marbles.end()); 

        cout << "CASE# " << case_number << ":" << endl;
        case_number++;

        for (int i = 0; i < q; ++i) {
            int query;
            cin >> query;

            int position = -1;
            for (int j = 0; j < n; ++j) {
                if (marbles[j] == query) {
                    position = j + 1; 
                    break;
                }
            }

            if (position != -1) {
                cout << query << " found at " << position << endl;
            } else {
                cout << query << " not found" << endl;
            }
        }
    }

    return 0;
}
