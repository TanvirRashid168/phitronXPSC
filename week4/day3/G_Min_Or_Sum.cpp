#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector <int> a(n);
        int OR = 0;
        for(int i=0;i<n;i++){
            cin >> a[i];
            OR |= a[i]; 
        }

        cout << OR << endl;
    }

    return 0;
}