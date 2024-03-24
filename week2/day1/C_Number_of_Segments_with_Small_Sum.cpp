#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, s;
    cin >> n >> s;

    vector<long long> arr(n);

    long long l = 0, r = 0, ans = 0;

    for (long long i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    long long sum = 0;
    while (r < n)
    {
        sum += arr[r];
        if (sum <= s)
        {
            ans += (r - l + 1);
        }
        else
        {
            while (sum > s && l <= r)
            {
                sum -= arr[l];
                l++;
            }
            if (sum <= s)
            {
                ans += (r - l + 1);
                
            }
        }
        r++;
    }

    cout << ans << endl;

    return 0;
}
