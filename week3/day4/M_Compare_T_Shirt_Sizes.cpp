#include <bits/stdc++.h>
using namespace std;
    int main(){
    int t;
    cin >> t;

    while (t--) {
        string s1, s2;
        cin >> s1 >> s2;

       
        char size_a = s1.back();
        char size_b = s2.back();

   
        if (size_a == 'S' && (size_b == 'M' || size_b == 'L')) {
            cout << "<" << endl;
        } else if (size_a == 'M' && size_b == 'S') {
            cout << ">" << endl;
        } else if (size_a == 'M' && size_b == 'L') {
            cout << "<" << endl;
        } else if (size_a == 'L' && (size_b == 'M' || size_b == 'S')) {
            cout << ">" << endl;
        } else if (size_a == 'S' && size_b == 'S') {
            
            int count_x_s1 = count(s1.begin(), s1.end(), 'X');
            int count_x_s2 = count(s2.begin(), s2.end(), 'X');

            if (count_x_s1 < count_x_s2) {
                cout << ">" << endl;
            } else if (count_x_s1 > count_x_s2) {
                cout << "<" << endl;
            } else {
                cout << "=" << endl;
            }
        } else if (size_a == 'L' && size_b == 'L') {
            int count_x_s1 = count(s1.begin(), s1.end(), 'X');
            int count_x_s2 = count(s2.begin(), s2.end(), 'X');
            
            if (count_x_s1 < count_x_s2) {
                cout << "<" << endl;
            } else if (count_x_s1 > count_x_s2) {
                cout << ">" << endl;
            } else {
                cout << "=" << endl;
            }
        } else {
            cout << "=" << endl;
        }
    }

    return 0;
}