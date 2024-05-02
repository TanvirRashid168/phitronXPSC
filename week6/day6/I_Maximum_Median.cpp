#include<bits/stdc++.h>
using namespace std;
#define ll long long 

bool check(ll x, ll k , ll n, vector<ll>& nums) {
    ll operations = 0;

    for(ll i = n / 2; i < n; i++) {
        if(x - nums[i] >= 0) {
            operations += (x - nums[i]);
        }
        if(operations > k) return false;
    }

    return operations <= k;
}

ll maximumMedian(ll n, ll k, vector<ll>& nums) {
    ll lo = 1, hi = LLONG_MAX; // Using LLONG_MAX instead of 2000000000

    while(lo <= hi) {
        ll mid = lo + (hi - lo) / 2;

        if(check(mid, k, n, nums)) {
            lo = mid + 1; // Increment lo instead of assigning mid
        } else {
            hi = mid - 1;
        }
    }

    return lo - 1; // Adjusting the return value
}

int main(){
    ll n, k;
    cin >> n >> k;
    vector<ll> nums(n);
    for(ll i = 0; i < n; i++) {
        cin >> nums[i];
    }
    cout << maximumMedian(n, k, nums) << endl;
    return 0;
}
