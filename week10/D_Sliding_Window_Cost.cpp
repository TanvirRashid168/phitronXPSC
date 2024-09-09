#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>

#define ll long long
using namespace __gnu_pbds;
using namespace std;

template<typename T> 
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;


int main(){
   ll n,k;
   cin >> n >> k;

   vector <ll> v(n);

   for(ll i=0;i<n;i++){
    cin >> v[i];
   }

   pbds <pair<ll,ll>> p;

   ll l=0,r=0;

   
   vector  <ll> a;

   while(r<n){
    p.insert({v[r],r});
    
    if(r-l+1 == k){
       ll mid = (k-1)/2;
       auto it = p.find_by_order(mid)->first;
       ll ans = 0;
       for(ll i=0;i<k;i++){

        auto val = p.find_by_order(i)->first;
        ans += abs(it-val);
       
       }

        cout << ans << " ";
        p.erase({v[l],l});
       l++;
    }
    r++;
   }

    return 0;
}