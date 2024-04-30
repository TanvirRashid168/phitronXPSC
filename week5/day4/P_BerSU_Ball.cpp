#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t=1;
    // cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> araB(n);
        for(int i=0; i<n; i++){
            cin>>araB[i];
        }
        int m; cin>>m;
        vector<int> araG(m);
        for(int i=0; i<m; i++){
            cin>>araG[i];
        }
        sort(araB.begin(), araB.end());
        sort(araG.begin(), araG.end());

        int sum = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(araB[i]==araG[j] || (araB[i]+1==araG[j]) || (araB[i] == araG[j]+1)){
                    sum += 1;
                    araG[j] = -2;
                    break;
                }
            }
        }
        cout<<sum<<endl;
    }

    return 0;
}