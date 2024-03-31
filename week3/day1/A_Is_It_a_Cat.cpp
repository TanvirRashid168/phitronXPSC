#include <bits/stdc++.h>
using namespace std;

void is_a_cat(int n,string s){
    int i=0;
    int flag = 0;

    while(i<n &&s[i]== 'm' || s[i] == 'M'){
        flag = 1;
        i++;
    }
    if(flag != 1){
        cout << "NO" << endl;
        return;
    }

    while(i<n &&s[i]== 'e' || s[i] == 'E'){
        flag = 2;
        i++;
    }
    if(flag != 2){
        cout << "NO" << endl;
        return;
    }

    while(i<n &&s[i]== 'o' || s[i] == 'O'){
        flag = 3;
        i++;
    }
    if(flag != 3){
        cout << "NO" << endl;
        return;
    }

    while(i<n &&s[i]== 'w' || s[i] == 'W'){
        flag = 4;
        i++;
    }
    if(flag != 4){
        cout << "NO" << endl;
        return;
    }

    if(i<n){
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;
    
}

int main() {
    int t;
    cin >> t;

    for(int i = 0; i < t; i++) {
        int n;
        string s;
        cin >> n >>  s;
        is_a_cat(n,s);
    }
        
    return 0;
}