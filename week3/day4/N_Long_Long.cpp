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
        vector<long long> arr(n);

        for (long long i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        long long sum = 0;
        long long op = 0;
        bool neg = false;

        for (long long i = 0; i <= n; i++)
        {
            if (i < n)
            {
                sum += abs(arr[i]);
            }

            if (neg)
            {
                if (i==n || arr[i] > 0)
                {
                    op++;
                    neg = false;
                }
            }
            else
            {
                if (arr[i] < 0)
                {
                    neg = true;
                }
            }
        }
           cout << sum << " " << op << endl;
    }

        return 0;
    }