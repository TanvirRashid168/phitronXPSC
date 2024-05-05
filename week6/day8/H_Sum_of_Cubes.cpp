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
        ll n;
        cin>>n;
        ll limit = cbrt(n)+1;
        bool found = false;
        unordered_set<ll> cubes;
        for(ll i=1; i<limit; i++){
            cubes.insert(i*i*i);
            if(cubes.count(n- i*i*i)){
                found = true;
                break;
            }
        }
        (found) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
    }

    return 0;
}