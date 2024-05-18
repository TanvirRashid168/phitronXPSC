#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> ans;

    if (n % 2 == 0) {
       
        for (int i = 0; i < n / 2; ++i) {
            ans.push_back(2);
        }
    } else {
        
        ans.push_back(3);
        for (int i = 0; i < (n - 3) / 2; ++i) {
            ans.push_back(2);
        }
    }
    sort(ans.begin(),ans.end());

    cout << ans.size() << endl;
    for (int i = 0; i < ans.size(); ++i) {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}
