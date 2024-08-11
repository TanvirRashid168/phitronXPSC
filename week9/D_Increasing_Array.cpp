#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin >> n;

    vector<long long> arr(n);

    for(long long i=0;i<n;i++){
        cin>> arr[i];
    }
    
    long long moves = 0;

    for(long long i=1;i<n;i++){
        if(arr[i] < arr[i-1]){
            long long new_val = abs(arr[i]-arr[i-1]);
            moves+= new_val;
            arr[i] += new_val;
        }
    }
    
    cout << moves << endl;

    return 0;
}