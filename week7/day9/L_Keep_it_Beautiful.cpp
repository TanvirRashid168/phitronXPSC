#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin>>n;
        vector <int> a(n);

        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        vector <int> ans;
        int curr = a[0];
        ans.push_back(1);

        bool flag = true;
        bool first = true;

        for(int i=1;i<n;i++){

            if(curr<=a[i] && flag == true){
                ans.push_back(1);
                curr = a[i];
        }else if(a[i]<=a[0] && (curr<=a[i] || first == true)){
            ans.push_back(1);
            curr = a[i];
            flag = false;
            first = false;
        }else{
            ans.push_back(0);
        }

        }

        for(int i:ans){
            cout << i;
        }
        cout<< endl;

    }

    return 0;
}