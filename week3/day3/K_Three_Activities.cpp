#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> sking(n), movie(n), board(n);
        vector<pair<int,int>> ski,mov,boa;

        for (int i = 0; i < n; i++) {
            cin >> sking[i];
            ski.push_back({sking[i],i});
        }
        for (int i = 0; i < n; i++) {
            cin >> movie[i];
            mov.push_back({movie[i],i});
        }
        for (int i = 0; i < n; i++) {
            cin >> board[i];
            boa.push_back({board[i],i});
        }

        sort(ski.begin(),ski.end(),greater<pair<int,int>>());
        sort(mov.begin(),mov.end(),greater<pair<int,int>>());
        sort(boa.begin(),boa.end(),greater<pair<int,int>>());

        int result = 0;

        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                for(int k=0;k<3;k++){
                    if(ski[i].second != mov[j].second && ski[i].second != boa[k].second && mov[j].second != boa[k].second){
                        result = max((ski[i].first+mov[j].first+boa[k].first),result);
                    }
                }
            }
        }

        cout << result << endl;

    }

    return 0;
}
