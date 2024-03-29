#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;

        vector <string> v(n);

        for(int i=0;i<n;i++){
            cin >> v[i];
        }

        int ans = INT_MAX;

        for(int i=0;i<n;i++){
            string s1 = v[i];
            for(int j=i+1;j<n;j++){
              string s2 = v[j];
              int temp = 0;
              for(int k=0;k<m;k++){
                temp += abs(s1[k] - s2[k]);
              }
              ans = min(temp,ans);
            }
        }

        cout << ans << endl;
    }

    return 0;
}