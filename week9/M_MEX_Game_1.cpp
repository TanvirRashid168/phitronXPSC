#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<ll> v(n);
        map<ll,ll> mp;

        for(int i=0;i<n;i++){
            cin >> v[i];
            mp[v[i]]++;
        }

        ll mex1 = 0;

        for(int i=0;i<=n;i++){
            if(mp[i] == 0){
                mex1 = i;
                break;
            }
        }

        ll mex2 = 0;
        ll first1= 0;

        for(int i=0;i<=n;i++){
            if(mp[i]<=1){
                first1 = i;
                break;
            }
        }

        for(int i = first1+1;i<=n;i++){
            if(mp[i]<=1){
                mex2 = i;
                break;
            }
        }

         mex1 = min(mex1,mex2);


        cout << mex1 << endl;
    }

    return 0;
}