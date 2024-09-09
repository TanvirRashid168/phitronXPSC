#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>

using namespace __gnu_pbds;
using namespace std;

template<typename T> 
using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main() {
    int n;
    cin >> n;
    pbds<int> p;

    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        p.insert(x);
    }

    int x = p.order_of_key(4);
    auto it = p.find_by_order(3);

    cout << x << endl;
    cout << *it << endl;

    //p.erase({4,2});
    for(auto value : p){
        cout << value << " ";
    }

   

    return 0;
}
