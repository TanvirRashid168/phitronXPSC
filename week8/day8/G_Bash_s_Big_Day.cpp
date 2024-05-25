#include <bits/stdc++.h>
using namespace std;
int main(){
long long n,i,co=0,j,ma=1,g,k;
cin>>n;
long long s[n],d[100004];
memset(d,0,sizeof(d));
for(i=0;i<n;i++){
    cin>>s[i];
    d[s[i]]++;
}
for(i=2;i<=100000;i++){
    co=0;
    for(j=i;j<=100000;j+=i){
        co += d[j];
    }
    ma = max(ma,co);
}
cout<<ma;
return 0;
}