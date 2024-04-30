#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"

void code(){
    int n;
        cin>>n;
        vector<int> ara(n);
        for(int i=0; i<n; i++){
            cin>>ara[i];
        }
        for(int i=1; i<n-1; i++){
            if(ara[i]>ara[i-1] && ara[i]>ara[i+1]){
                cout<<"YES"<<endl;
                cout<<i<<" "<<i+1<<" "<<i+2<<endl;
                return;
            }

        }
        cout<<"NO"<<endl;
        return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        code();

    }

    return 0;
}