#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
#define ll long long

using namespace __gnu_pbds;
using namespace std;

template<typename T> 
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main(){
   int t;
   cin >> t;

   while(t--){
    int n;
    cin >> n;

    vector <pair<int,int>> people(n);
    

    for(int i=0;i<n;i++){
     cin >> people[i].first >> people[i].second;
    }

    sort(people.begin(),people.end());
    
    pbds <int> p;
    int ans = 0;

    for(int i=n-1;i>=0;i--){
      int start = people[i].first;
      int end = people[i].second;
      ans+=p.order_of_key(end+1);

      p.insert(end);

    }

    cout << ans << endl;
  
}
  return 0;

}