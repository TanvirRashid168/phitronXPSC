#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin >> t;

    while(t--){
        long long x,y;
        cin >> x >> y;
       
        if(y>2*x ||x > 2*y || (x+y)%3 != 0){
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
        }

    }

    return 0;
}