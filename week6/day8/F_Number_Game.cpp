#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define endl "\n"
bool pos(vector<int> ara, int n, int k){
    multiset<int> s;
    for(auto i:ara){
        s.insert(i);
    }
    for(int i=1; i<=k; i++){
        if(s.empty()) return false;
        int req = k-i+1;
        auto j = s.upper_bound(req);
        if(j == s.begin()) return false;
        j--;

        s.erase(j);
        if(!s.empty()){
            j =s.begin();
            ll v = (*j);
            v+=(req);
            s.erase(j);
            s.insert(v);
        }
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> ara(n);
        for(int i=0; i<n; i++){
            cin>>ara[i];

        }
        int k; 
        int low = 0, high = n;
        while(low<=high){
            int mid = low+(high-low)/2;
            if(pos(ara, n, mid)){
                k = mid;
                low = mid+1;
            }
            else high = mid-1;
        }
        cout<<k<<endl;
    }

    return 0;
}