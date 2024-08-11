#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n,x;
    cin>>n>>x;

    vector<ll> v(n);

    for(ll i=0;i<n;i++){
        cin >> v[i];
    }

    ll sum=0,count=0;
    map<ll,ll> seen;
    seen[0]++;

    for(ll i=0;i<n;i++){
        sum+=v[i];
        count+=seen[sum-x];
        seen[sum]++;
    }

   

    cout << count << endl;

    return 0;
}