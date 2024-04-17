#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        int ans = 0;
        int odd = 0;

        for(int i = 0; i < k; i++) {
            if(a[i] % 2 != 0) {
                odd++;
            }
        }

        if(odd > 0) {
            ans++;
        }

        for(int i = k; i < n; i++) {
            if(a[i - k] % 2 != 0) {
                odd--;
            }
            if(a[i] % 2 != 0) {
                odd++;
            }
            if(odd > 0) {
                ans++;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
