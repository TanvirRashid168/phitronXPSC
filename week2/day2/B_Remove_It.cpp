#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cin >> n >> x;

    vector <int> v(n);

    for(int i=0;i<n;i++){
        cin >> v[i];
    }

    v.erase(remove(v.begin(),v.end(),x),v.end());

    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
   
    return 0;
}