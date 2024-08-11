#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
            int curr = n;
 for(int i=1;i<=n;i++){
 while(true){
                if(curr <=9){
                    cout << curr << endl;
                    break;
                }
                int s = 0;
                while(curr){
                    s+= curr%10;
                    curr/=10;
                }
                curr = s;
                cout << s << endl;
            }

 }
            
    }
    return 0;
}