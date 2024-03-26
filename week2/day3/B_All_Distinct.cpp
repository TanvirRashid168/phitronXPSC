#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        int n;
        cin >> n;

        int arr[n];
        for(int j = 0; j < n; j++) {
            cin >> arr[j];
        }

        sort(arr, arr + n);

        int duplicate = 0;

        for(int j = 0; j < n - 1; j++) {
            if(arr[j] == arr[j + 1]) {
                duplicate++;
                
            }
        }

        
        if(duplicate % 2 != 0) {
            duplicate++;
        }

        cout << n - duplicate << endl;
    }

    return 0;
}
