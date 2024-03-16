#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    set<char> st;

    for (char ch : s) {
        st.insert(ch);
    }

    bool flag = false;
    for (char i = 'a'; i <= 'z'; i++) {
        if (st.find(i) == st.end()) {
            cout << i << endl;
            flag = true;
            break;
        }
    }

    if (!flag) {
        cout << "None" << endl;
    }

    return 0;
}