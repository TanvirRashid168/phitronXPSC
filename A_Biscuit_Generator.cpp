#include <bits/stdc++.h>
using namespace std;
int main(){
    int A,B,T;
    cin >> A >> B >> T;

    int batch = T/A;
    int total_biscuit = B*batch;

    if((T+0.5) - batch*A == 0){
        total_biscuit += B;
    }
   
   cout << total_biscuit << endl;
    return 0;
}