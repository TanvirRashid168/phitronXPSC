#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector <int> arr(n);

        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        int max = arr[0];
        int min = arr[0];

        for(int i=1;i<n;i++){
           max |= arr[i];
           min &= arr[i];
        }

        cout << max - min << endl; 
    }

    return 0;
}