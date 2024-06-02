#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll gcd(ll m, ll n) {
	if(m<n) { ll tmp; tmp=m; m=n; n=tmp; }
    ll r;
    while(n) {
        r = m % n;
        m = n;
        n = r;
    }
    return m;  }

int main()
{  int t;
  scanf("%d",&t);
  while(t--)
  { ll  a,b; int l=1;
    scanf("%lld %lld",&a,&b);
     ll g=gcd(a,b);
     while(b!=1)
     {  if(g==1) { l=0; break; }
	    b=b/g;
        g=gcd(b,g); l=1;
     }
     if(l==1) printf("Yes\n"); else printf("No\n"); 
    
  }
	return 0;
}