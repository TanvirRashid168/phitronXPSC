#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    string x = "Timur";

    int timurCountLower[26] = {0};
    int TIMURCountUpper[26] = {0};

    for (char c : x) {
        if (islower(c)) {
            timurCountLower[c - 'a']++;
        } else {
            TIMURCountUpper[c - 'A']++;
        }
    }

    while (t--) {
        int n;
        cin >> n;

        bool flag = true;
        for (int j = 0; j < n; j++) {
            string s;
            cin >> s;

            int charCountLower[26] = {0};
            int CHARCountUpper[26] = {0};

            for (char c : s) {
                if (islower(c)) {
                    charCountLower[c - 'a']++;
                } else {
                    CHARCountUpper[c - 'A']++;
                }
            }

            for (int i = 0; i < 26; i++) {
                if (timurCountLower[i] != charCountLower[i] || TIMURCountUpper[i] != CHARCountUpper[i]) {
                    flag = false;
                    break;
                }
            }

            if (!flag) {
                break;
            }
        }

        if (flag) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
