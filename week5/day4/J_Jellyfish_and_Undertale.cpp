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
        int n, a, b;
        cin>>a>>b>>n;
        vector<int> ara(n);
        for(int i=0; i<n; i++){
            cin>>ara[i];
        }

        ll time = b;
        for(int i=0; i<n; i++){
            time += min(ara[i], a-1);
        }
        cout<<time<<endl;
    }

    return 0;
}