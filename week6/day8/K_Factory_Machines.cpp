#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"
bool check(long long mid, vector<long long> &machines, long long t) {
    long long total = 0;
    for(auto &time : machines) {
        total += mid / time;
        if(total >= t) return true;
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, t;
    cin >> n >> t;
    vector<long long> machines(n);
    for(long long i = 0; i < n; i++) {
        cin >> machines[i];
    }
    long long left = 1, right = 1e18, ans = right;
    while(left <= right) {
        long long mid = left + (right - left) / 2;
        if(check(mid, machines, t)) {
            ans = mid;
            right = mid - 1;
        }
        else left = mid + 1;
    }
    cout << ans << endl;

    return 0;
}