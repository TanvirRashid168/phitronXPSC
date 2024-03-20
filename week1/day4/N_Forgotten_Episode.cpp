#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n;
    cin >> n;
    long long arr[n - 1];

    for(long long i = 0; i < n - 1; i++) {
        cin >> arr[i];
    }

    sort(arr, arr + n - 1);
    long long forgotten = -1;

    for(long long i = 0; i < n - 1; i++) {
        if (arr[i] != i + 1) {
            forgotten = i + 1;
            break;
        }
    }

    if (forgotten == -1) {
        forgotten = n;
    }

    cout << forgotten << endl;

    return 0;
}