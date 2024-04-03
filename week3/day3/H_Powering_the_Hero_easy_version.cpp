#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;

        priority_queue<long long> pq;
        vector<long long> v(n);
        for (long long i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        long long ans = 0;
        for (long long i = 0; i < n; i++)
        {

            if (v[i] == 0)
            {
                if (pq.empty())
                    continue;
                ans += pq.top();
                pq.pop();
            }
            else
            {
               pq.push(v[i]);
            }
        }

        cout << ans << endl;
    }

    return 0;
}