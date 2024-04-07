#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,q;
        cin >> n >>q;
        map<int,vector<int>> mp;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
            mp[a[i]].push_back(i);
        }

        for(int i=0;i<q;i++){
            int u,v;
            cin >> u >>v;
            if(mp[u].size() == 0 || mp[v].size()==0){
                cout << "NO" << endl;
                continue;
            }
            else if(mp[u].front() > mp[v].back()){
                cout << "NO" << endl;
            }else{
                cout << "YES" << endl;
            }
        }

    }

    return 0;
}