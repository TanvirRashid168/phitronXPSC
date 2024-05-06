#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vector <int> a(n),b(n);

        for(int i=0;i<n;i++){
            cin >> a[i];
            
        }

        for(int i=0;i<n;i++){
            cin >> b[i];
            if(b[i] != 0){
            }
        }
        int dif = 0;
        for(int i=0;i<n;i++){
            dif = max(dif,a[i]-b[i]);
        }
        
         int flag = true;
        

        for(int i=0;i<n;i++){
            if(b[i] == 0){
                continue;
            }else if(b[i] > a[i]){
                 flag = false;
                 break;
            }else if(a[i]-b[i] != dif){
                 flag = false;
                 break;
            }
        }

        if(flag){
            cout << "YES" << endl;
        }else{
            cout << "NO" <<endl;
        }
    }

    return 0;
}