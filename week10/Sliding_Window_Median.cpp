#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>

using namespace __gnu_pbds;
using namespace std;

template<typename T> 
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    pbds<pair<int, int>> p;

    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int r = 0, l = 0;

    while(r < n) {
        p.insert({v[r], r});

        if(r - l + 1 == k) {
            int mid = k / 2;
            if(k%2==0){
               mid--;
            }
            auto it = p.find_by_order(mid);
            cout << it->first << " ";

            p.erase({v[l], l});
            l++;
        }
        r++;
    }

    return 0;
}
