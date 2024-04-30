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
        int n;
        cin>>n;
        vector<ll> ara(n);
        ll neg = 0, ans = 0, minn = INT_MAX;
        for(int i=0; i<n; i++){
            cin>>ara[i];
            if(ara[i]<0){
                neg++;
            }
            ans += abs(ara[i]);
            minn = min(minn, abs(ara[i]));
        }
        if(neg%2 == 1) ans -= (2LL*minn);
        cout<<ans<<endl;
    }

    return 0;
}