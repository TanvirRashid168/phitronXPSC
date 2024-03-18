#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;

    vector<int> a(n),b(m);

    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    for(int i=0;i<m;i++){
        cin >> b[i];
    }

    int l=0,r=0;
    long long ans=0;

    while(l<n && r<m){
        int count1=0,count2=0,crnt = a[l];
        while(a[l]==crnt && l<n){
            count1++;
            l++;
        }

        while(crnt >b[r] && r<m){
            r++;
        }

        while(b[r] == crnt && r < m){
            count2++;
            r++;
        }

       ans += (1ll * count1 * count2);
    }
    cout << ans << endl;

    return 0;
}