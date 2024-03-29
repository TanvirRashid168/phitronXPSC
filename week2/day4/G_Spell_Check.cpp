#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s, t = "Timur";
        cin >> s;
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        if (n != 5)
        {
            cout << "NO" << endl;
        }
        else
        {
            if (s == t)
            {
                cout << "YES"<< endl;
            }
            else
            {
                cout << "NO" << endl;
    
            }
        }
    }

    return 0;
}