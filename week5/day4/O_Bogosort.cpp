#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> ara(n);
        for(int i=0; i<n; i++){
            cin>>ara[i];
        }
        sort(ara.begin(), ara.end(), greater<int>());
        for(int i=0; i<n; i++){
            cout<<ara[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}