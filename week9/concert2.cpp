#include <bits/stdc++.h>
using namespace std;

int findClosest(vector<int>& v, int n, int x) {
    int left = 0, right = n - 1;
    int closest = v[0];
    
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (abs(v[mid] - x) < abs(closest - x)) {
            closest = v[mid];
        }
        
        if (v[mid] == x) {
            return v[mid];
        } else if (v[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    if (closest < x) {
        return -1;
    } else {
        return closest;
    }
}


int main() {
    int n, m;
    cin >> n >> m;
    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i]; 
    }

    sort(v.begin(), v.end());
    
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        int ans = findClosest(v, n, x);
        if (ans != -1) {
            cout << ans << endl;
            removeValue(v, ans);  
            n--;
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}
