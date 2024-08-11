#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n;
    cin >> n;

    vector<ll> v(n);

    for(ll i=0;i<n;i++){
        cin >> v[i];
    }

    ll i=0,j=0,sum=0,count=0;

    map<ll,ll> seen;
    seen[0]++;
    for(ll i=0;i<n;i++){
        sum+=v[i]%n;
        sum = (sum+n)%n;
        count+=seen[sum];
        seen[sum]++;
    }

    cout << count <<endl;

    return 0;
}