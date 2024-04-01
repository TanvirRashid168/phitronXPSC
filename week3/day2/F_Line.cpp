#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        vector<ll> remove;
        ll total = 0;
        ll min_change = 0;
        for (int i = 0; i < n; i++)
        {
            ll L = i;
            ll R = n - i - 1;

            if (s[i] == 'L')
            {
                if (R > L)
                {
                    min_change++;
                    total += R;
                    remove.push_back(R - L);
                }
                else
                {
                    total += L;
                }
            }
            else
            {
                if (L > R)
                {
                    min_change++;
                    total += L;
                    remove.push_back(L - R);
                }
                else
                {
                    total += R;
                }
            }
        }

        vector <ll> ans(n+1);
        for(int i = min_change;i<=n;i++){
            ans[i] = total;
        }
        sort(remove.begin(),remove.end(),greater<ll>());

        for(int i=min_change-1;i>=1;i--){
           total-=remove.back();
           remove.pop_back();
           ans[i] = total;
        }

        for(int i=1;i<=n;i++){
            cout << ans[i] << " ";
        }

        cout  << endl;
    }

    return 0;
}