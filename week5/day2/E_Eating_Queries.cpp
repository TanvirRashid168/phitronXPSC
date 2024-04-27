#include <bits/stdc++.h>
using namespace std;
int main(){
    
int t;
cin >> t;

while(t--){
    int n,q;
    cin >> n >> q;

    vector <int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    sort(a.begin(),a.end(),greater<int>());

    vector <int> pref(n);
    pref[0] = a[0];

    for(int i=1;i<n;i++){
       pref[i] = pref[i-1]+a[i];
    }

    while(q--){
        int x;
        cin >> x;
        if(x>pref[n-1]){
            cout << -1 << endl;
        }else{
            int l=0,r=n-1,mid = (l+r)/2 ,temp = 0;

            while(l<=r){
                mid = (l+r)/2;

                if(pref[mid] < x){
                    l=mid+1;
                }else if(pref[mid] > x){
                    r=mid-1;
                }else{
                    temp = 1;
                    cout << mid+1 << endl;
                    break;
                }
            }

            if(temp == 0){
                cout << l+1 <<endl;
            }
        }

    }
}
    return 0;
}