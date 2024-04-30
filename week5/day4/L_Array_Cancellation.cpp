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
        ll ara[n];
        for(int i=0; i<n; i++){
            cin>>ara[i];
        }

        ll pos = 0;
        for(int i=0; i<n; i++){
            if(ara[i]<0){
                ll x = ara[i]+pos;
                if(x>0){
                    pos = x;
                    ara[i] = 0;

                }
                else{
                    ara[i] = ara[i]+pos;
                    pos = 0;
                }

            }
            else{
                pos += ara[i];
            }
        }
        ll res = 0;
        for(int i=0; i<n; i++){
            if(ara[i]<0) res += abs(ara[i]);
        }
        cout<<res<<endl;
    }

    return 0;
}