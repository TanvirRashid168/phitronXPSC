#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
   int X=y*log(x);
   int Y=x*log(y);


    if(X==Y){
        cout<<"=\n";
    }
    else if(X>Y){
        cout<<">\n";
    }
    else if(X<Y){
        cout<<"<\n";
    }

    return 0;
}