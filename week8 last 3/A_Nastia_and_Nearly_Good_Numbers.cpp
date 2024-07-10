#include<bits/stdc++.h>
using namespace std;

int t, m, n;

int main() {
    cin >> t;
    while(t--) {
        cin >> m >> n;
        if(n==1) {
            cout<<"NO"<<endl;
        } else {
            cout<<"YES"<<endl;
            cout<<m<<" "<<(long long)m*n<<" "<<(long long)m*(n+1)<<endl;
        }
    }
    return 0;
}
