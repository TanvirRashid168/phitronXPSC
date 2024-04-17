#include <bits/stdc++.h>
using namespace std;
const int N = (1<<8);
int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int ans = 0;
        vector <int> arr(n);
        for(int i=0;i<n;i++){
           cin >> arr[i];
           ans ^= arr[i];
        }

        if(n%2 == 0){
            if(ans == 0){
                cout << 0 << endl;
            }else{
                cout << -1 << endl;
            }
        }else{
            cout << ans << endl;
        }

        

    }

    return 0;
}