#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        string s;

        cin >> s;
        int cnt = 0; 
        int X =0;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
               X++;
            }else{
                if(X > 0){
                    X--;
                }else{
                    cnt++;
                }
            }
        }
        cout << cnt << endl;
    }

    return 0;
}