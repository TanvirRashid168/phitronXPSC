#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;

    vector <int> a(n),b(m);
    vector <int> k(n+m);

    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    for(int i=0;i<m;i++){
        cin >> b[i];
    }
    int l = 0, r = 0, t = 0;

    while(l<n || r<m){
        if(r == m || a[l] < b[r] && l<n){
            k[t] = a[l];
            l++;
            t++;
        }else{
            k[t] = b[r];
            r++;
            t++;
        }
    }

    for(int i=0;i<k.size();i++){
        cout << k[i] << " ";
    }


    return 0;
}