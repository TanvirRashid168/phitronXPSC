#include <bits/stdc++.h>
using namespace std;
int main () {
   long long l, r;
   cin >> l >> r;
   cout << "YES" << endl; 
   for (long long i = l; i < r + 1; i += 2)
      cout << i << ' ' << i + 1 << endl;
   return 0;
}