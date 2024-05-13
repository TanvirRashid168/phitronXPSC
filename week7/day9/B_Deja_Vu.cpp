#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;

    while(t--){
        int n,q;
        cin >> n >> q;

        vector<int> a(n),que;

        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        for(int i=0;i<q;i++){
            int x;
            cin >> x;
            if(que.empty()||que.back()>x){
                 que.push_back(x);
            }
        }

        for(int i=0;i<n;i++){
            for(int x:que){
                if(a[i]%(1<<x)==0){
                    x=x-1;
                    a[i]+=(1<<x);
                }
            }
        }

        for(int x:a){
            cout << x << " ";
        }
        cout << endl;

    }

    return 0;
}