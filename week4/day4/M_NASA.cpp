#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool isPalindrome(int num) {
    string s = to_string(num);
    int n = s.length();
    for (int i = 0; i < n / 2; ++i) {
        if (s[i] != s[n - i - 1])
            return false;
    }
    return true;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> A(n);
        for (int i = 0; i < n; ++i) {
            cin >> A[i];
        }

        int count = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = i; j < n; ++j) {
                int result = A[i] ^ A[j];
                if (isPalindrome(result)) {
                    count++;
                }
            }
        }
        cout << count << endl;
    }

    return 0;
}
