#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>

#define ll long long
using namespace __gnu_pbds;
using namespace std;

template<typename T> 
using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;


int main(){
    ll t;
    cin >> t;
    
    while(t--){
        ll n;
        cin >> n;
        
        vector <ll> v(n);
        for(ll i=0;i<n;i++){
            cin >> v[i];
        }
        pbds <ll> p;
         ll ans = 0;
        for(ll i=n-1;i>=0;i--){
            ans += p.order_of_key(v[i]);
             p.insert({v[i]});
        }
         cout << ans << endl;
    }



    return 0;
}