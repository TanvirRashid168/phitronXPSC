#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long x;
        cin >> x;

        long long minimum = LONG_MAX;
        pair<long long, long long> minPair;

        for (long long l = 0, r = x; l < r; ++l, --r) {
            if ((r - l) < minimum && ((l ^ r) == x)) {
                minimum = r - l;
                minPair = {l, r};
            }
        }

        
        cout << minPair.first <<" "<<  minPair.second << endl;
    }

    return 0;
}
