#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,k;
    cin >> n >> k;
    
    vector<long long> divisor;
    for(long long i=1;i*i<=n;i++){
        if(n%i == 0){
            divisor.push_back(i);

            if(n/i != i){
                divisor.push_back(n/i);
            }
        }
    }

    sort(divisor.begin(),divisor.end());

    if(divisor.size() >= k){
        cout << divisor[k-1] << endl;
    }else{
        cout << -1 << endl;
    }

    return 0;
}