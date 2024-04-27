#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;

    vector<int> heights(n);
    for (int i = 0; i < n; ++i) {
        cin >> heights[i];
    }

    int q;
    cin >> q;

    while (q--) {
        int luchuHeight;
        cin >> luchuHeight;

        int lowerBound = -1, upperBound = n;

        // Binary search to find the tallest lady chimp shorter than Luchu
        while (upperBound - lowerBound > 1) {
            int mid = (lowerBound + upperBound) / 2;
            if (heights[mid] < luchuHeight) {
                lowerBound = mid;
            } else {
                upperBound = mid;
            }
        }

        int tallestShorter = lowerBound >= 0 ? heights[lowerBound] : -1;

        lowerBound = -1, upperBound = n;
        while (upperBound - lowerBound > 1) {
            int mid = (lowerBound + upperBound) / 2;
            if (heights[mid] <= luchuHeight) {
                lowerBound = mid;
            } else {
                upperBound = mid;
            }
        }

        int shortestTaller = upperBound < n ? heights[upperBound] : -1;

        if (tallestShorter != -1) {
            cout << tallestShorter << " ";
        } else {
            cout << "X ";
        }

        if (shortestTaller != -1) {
            cout << shortestTaller << endl;
        } else {
            cout << "X" << endl;
        }
    }

    return 0;
}