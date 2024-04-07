#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long sum =n;
        while(n>0){
            sum+=n/2;
            n=n/2;
        }

        cout << sum << endl;
    }

    return 0;
}