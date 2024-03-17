#include <bits/stdc++.h>
using namespace std;
int main(){
    int ebo,ivo,sld;
    cin >> ebo >> ivo >> sld;
    bool flag = false;
    for(int i=0;i<=sld;i++){
        for(int j=0;j<=sld;j++){
            if(ebo*i+ivo*j == sld){
                flag = true;
                break;
            }
        }
    }

    if(flag){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    return 0;
}