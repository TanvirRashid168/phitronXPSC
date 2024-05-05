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
        ll n, k;
        cin>>n>>k;
        ll ans = k+(k-1)/(n-1);
        cout<<ans<<endl;
    }

    return 0;
}