#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> pref(n); 
    pref[0] = a[0];
    for (int i = 1; i < n; i++) {
        pref[i] = pref[i - 1] + a[i]; 
    }
   
   int k;
   cin >> k;
   while(k--){
    int x;
    cin >> x;

    // Binary search to find the pile number
    int l = 0, r = n - 1, ans = 0;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (pref[mid] >= x) {
            ans = mid; // Update ans
            r = mid - 1; // Search in the left half
        } else {
            l = mid + 1; // Search in the right half
        }
    }

    // Output the pile number
    if (ans == 0)
        cout << ans + 1 << endl; // First pile
    else
        cout << ans + 1 << endl; // ans is the 1-based index of the pile

   }

    return 0;
}
