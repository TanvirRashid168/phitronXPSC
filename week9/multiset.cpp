#include <bits/stdc++.h>
using namespace std;
int main(){
    multiset<int> s{1,2,4,3,5,7,8,9,9,9};

    // cout << s.count(9) << endl;
    // s.erase(9);
    // cout << s.count(9) << endl;

    auto it = s.lower_bound(5);
    it--;
    cout << *it << endl;

    return 0;
}