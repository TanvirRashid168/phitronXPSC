#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);

        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        vector<int> dif(n-1);
        for(int i=0;i<n-1;i++){
            dif[i] = abs(a[i]-a[i+1]);
        }

        int optimal_score = INT_MAX;

        if(n>=2){
            optimal_score = min(optimal_score,dif[0]);
        }

        if(n>=2){
            optimal_score = min(optimal_score,dif[n-2]);
        }

        for(int i=1;i<n-1;i++){
            int max_dif = max(dif[i-1],dif[i]);
            optimal_score = min(optimal_score,max_dif);
        }

     cout << optimal_score <<endl;

    }

    return 0;
}