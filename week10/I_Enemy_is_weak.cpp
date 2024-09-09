#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

// Define the ordered set with integers
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    // Vector to store count of elements larger before each index
    vector<int> countLargerBefore(n, 0);
    ordered_set osLeft;

    // Calculate count of elements larger before each element
    for (int i = 0; i < n; ++i) {
        // Count elements greater than current element
        countLargerBefore[i] = osLeft.size() - osLeft.order_of_key(a[i]);
        osLeft.insert(a[i]);
    }

    // Vector to store count of elements smaller after each index
    vector<int> countSmallerAfter(n, 0);
    ordered_set osRight;

    // Calculate count of elements smaller after each element
    for (int i = n - 1; i >= 0; --i) {
        // Count elements smaller than current element
        countSmallerAfter[i] = osRight.order_of_key(a[i]);
        osRight.insert(a[i]);
    }

    // Calculate the total weakness
    long long weakness = 0;
    for (int i = 0; i < n; ++i) {
        weakness += (long long)countLargerBefore[i] * countSmallerAfter[i];
    }

    cout << weakness << endl;

    return 0;
}
