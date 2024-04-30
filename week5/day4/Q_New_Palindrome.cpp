#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"
void code(){
    string s;
    cin>>s;
    for(int i=0; i<(s.size()/2)-1; i++){
        if(s[i] != s[i+1]){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
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