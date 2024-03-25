#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int arr[n];
        vector <char> s[n];

        
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }

       
        for(int i = 0; i < n; i++) {
            int moves;
            cin >> moves;
            for(int j = 0; j < moves; j++) {
                char move;
                cin >> move;
                s[i].push_back(move);
            }
        }

       
        for(int i = 0; i < n; i++) {
            for(char c : s[i]) {
                if(c == 'D') {
                    if(arr[i] == 9) {
                        arr[i] = 0;
                    } else {
                        arr[i]++;
                    }
                } else if (c == 'U') {
                    if(arr[i] == 0) {
                        arr[i] = 9;
                    } else {
                        arr[i]--;
                    }
                }
            }
        }

        
        for(int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
