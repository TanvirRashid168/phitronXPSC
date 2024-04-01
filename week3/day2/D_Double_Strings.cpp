#include <bits/stdc++.h>
using namespace std;

int num_strings;
string strings[100005];
bool answers[100005];

void solve(){
    cin >> num_strings;
    set<string> string_set;
    for(int i=0; i<num_strings; i++){
        cin >> strings[i];
        string_set.insert(strings[i]);
        answers[i] = 0;
    }

    for(int i=0; i<num_strings; i++){
        for(int j=0; j<strings[i].size(); j++){
            string prefix = "", suffix = "";
            for(int k=0; k<j; k++){
                prefix += strings[i][k];
            }
            for(int k=j; k<strings[i].size(); k++){
                suffix += strings[i][k];
            }

            if(string_set.find(prefix) != string_set.end() && string_set.find(suffix) != string_set.end()){
                answers[i] = 1;
                break;
            }
        }
    }

    for(int i=0; i<num_strings; i++){
        cout << answers[i];
    }
    cout << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int test_cases;
    cin >> test_cases;
    while(test_cases--){
        solve();
    }

    return 0;
}
