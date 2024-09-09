#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n;
    cin >> n;

    vector <int> v(n);

    for(int i=0;i<n;i++){
        cin >> v[i];
    }

    // sort(v.begin(),v.end());
    set <vector<int>> s;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(v[i]<v[j]<v[k]){
                   s.insert({v[i],v[j],v[k]});
                }
            }
        }
    }

    cout << s.size() << endl;

    return 0;
}