#include <bits/stdc++.h>
using namespace std;

bool is_palindrome(vector<int> v,int x){
    int n=v.size(),i=0,j=n-1;

    while(i<j){
        if(v[i] == x){
            i++;
        }else if(v[j]==x){
            j--;
        }else if(v[i] != v[j]){
            return false;
        }else{
            i++;
            j--;
        }
    }
    return true;
}


int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);

        for(int i=0;i<n;i++){
            cin >> v[i];
        }

        bool flag = true;

        for(int i=0;i<n-1-i;i++){
            if(v[i] != v[n-1-i]){
                flag = is_palindrome(v,v[i]) || is_palindrome(v,v[n-1-i]);
                break;
            }
        }

        if(flag){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }

    }

    return 0;
}