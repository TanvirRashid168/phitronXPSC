#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;

    if(n<10){
        cout << "000" << n << endl;
    }else if(n < 100){
        cout << "00" << n << endl;
    }else if(n<1000){
        cout << "0" << n << endl;
    }else{
        cout << n << endl;
    }

    return 0;
}