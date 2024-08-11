#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n, x;
    cin >> n >> x;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int i = 0, j = 0, sum = 0, count = 0;

    while (i < n)
    {
        sum += v[i];

        while (sum >= x)
        {
            if (sum == x)
            {
                count++;
            }
            sum -= v[j];
            j++;
        }
        i++;
    }

    cout << count << endl;

    return 0;
}