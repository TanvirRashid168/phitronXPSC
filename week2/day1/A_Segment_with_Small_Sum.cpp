#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, s;
    cin >> n >> s;
    long long r = 0, l = 0, sum = 0;

    vector <long long> arr(n);

    for (long long i = 0; i < n; i++) {
        cin >> arr[i];
    }

    long long res = 0;

    for (long long r = 0; r < n; r++) {
        sum += arr[r];
       if(sum <= s){
         res = max(res,r-l+1); 
       }else{
         sum-=arr[l];
         l++;
       }
       
    }

    cout << res << endl;

    return 0;
}
