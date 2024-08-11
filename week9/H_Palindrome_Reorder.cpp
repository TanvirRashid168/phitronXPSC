#include <bits/stdc++.h>
using namespace std;


int occr[26];
void solution(){
   string x;
   cin >> x;
   memset(occr, 0, sizeof(occr));
   int n = x.size();
   for(int i=0;i<n;i++){
      occr[x[i]-'A']++;
   }

   int odds = 0;
   int oddi = -1;

   for(int i=0;i<26;i++){
      if(occr[i] %2 != 0){
        odds++;
        oddi = i;
      }
   }

   if(odds > 1){
    cout << "NO SOLUTION" << endl;
    return;
   }

  for(int i=0;i<26;i++){
    if(occr[i]%2 == 0){
        int half = occr[i] / 2;
        occr[i] -= half;
        while(half--){
        cout << (char)(i+'A');
       }
       
       
    }
  }

  if(oddi != -1){
    while(occr[oddi]--){
        cout << char(oddi + 'A');
    }
  }


  for(int i=26;i>=0;i--){
    if(occr[i]> 0){
        while(occr[i]>0){
            occr[i]--;
            cout << char(i+'A');
        }
    }
  }
  cout << endl;

}
int main(){
    
    solution();

    return 0;
}