#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    int x;

    for(long long i = 0; i < n; i++) {
        cin >> x;
        vector<long long> ans;
        for(long long j = 1; j*j <= x; j++) {
            if(x % j == 0) {
                ans.push_back(j);
                if(x/j != j){
                   ans.push_back(x/j);
                }
                
            }
        }
        if (ans.size() == 3) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
