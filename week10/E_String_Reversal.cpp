#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>

using namespace __gnu_pbds;
using namespace std;

template<typename T> 
using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    string r=s;
    reverse(r.begin(),r.end());

    map<char,vector<int>> str_s,str_r;

    for(int i=0;i<n;i++){
        str_s[s[i]].push_back(i);
        str_r[r[i]].push_back(i);
    }

    // for(auto it:str_s){
    //     vector<int> v = it.second;
    //     cout<<it.first << "->";

    //     for(auto val:v){
    //         cout << val <<" ";
    //     }
    //     cout << endl;
    // }

    vector <int> permutation(n);

    for(char ch = 'a' ; ch<='z' ; ch++){
        for(int i=0;i<str_s[ch].size();i++){
            permutation[str_r[ch][i]] = str_s[ch][i];
        }
    }
    
    pbds<int> p;
    int ans =0;

    for(int i=n-1;i>=0;i--){
        ans+=p.order_of_key(permutation[i]);
        p.insert(permutation[i]);
    }

    cout << ans << endl;
    return 0;
}