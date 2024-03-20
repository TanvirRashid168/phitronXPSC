#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n; 

        vector<int> a(n);
        for (int j = 0; j < n; ++j) {
            cin >> a[j]; 
        }

        int operations = 0;
        for (int j = 0; j < n; ++j) {
            if (a[j] > j + 1) {
                operations = max(operations, a[j] - (j + 1)); 
            }
        }

        cout << operations << endl;
    }

    return 0;
}
