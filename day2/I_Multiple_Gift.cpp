#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll x,y;
    cin >> x >> y;
    ll val = 0;
    ll i=0;
    while(x <= y){
        x*=2;
        i++;
    }

    cout << i << endl;

    return 0;
}