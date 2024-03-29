#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        map<ll, ll> freq;

        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            freq[x]++;
        }

        ll mx = INT_MIN;

        for (auto it : freq)
        {
            mx = max(mx, it.second);
        }

        ll ans = n - mx;

        if (n == mx)
        {
            cout << 0 << endl;
        }
        else
        {
            int cnt = 1;

            while (mx<=n){
                if(2*mx >= n){
                    cnt +=(n-mx);
                    break;
                }
                cnt += mx;
                mx = mx*2;
                cnt++;
            }
            

            cout << cnt<< endl;
        }
    }

    return 0;
}