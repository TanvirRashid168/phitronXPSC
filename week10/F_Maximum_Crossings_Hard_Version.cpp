#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>

using namespace __gnu_pbds;
using namespace std;

template<typename T> 
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main() {
   long long t;
   cin >> t;

   while(t--){
    long long n;
    cin >> n;
    vector <long long> v(n);

    for(long long i=0;i<n;i++){
        cin >> v[i];
    }

    pbds<pair<long long,long long>> p;
    long long ans = 0;
    for(long long i=n-1;i>=0;i--){
        ans+=p.order_of_key({v[i]+1,i});
        p.insert({v[i],i});
    }

    cout << ans << endl;

   }


   

    return 0;
}
