#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
       int n;
        cin >> n;

        int x = 1;

        while(x<=n-1) x*=2;
        x/=2;

        for(int i=n-1;i>=x;i--){
            cout << i << " ";
        }

        for(int i=0;i<x;i++){
            cout << i << " ";
        }
       cout << endl;
    }
       
    return 0;
}