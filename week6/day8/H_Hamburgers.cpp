#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll nb, ns, nc, pb, ps, pc, r;
ll b, s, c;
string str;

bool check(ll mid) {
    ll rb = max(0LL, mid * b - nb);
    ll rs = max(0LL, mid * s - ns);
    ll rc = max(0LL, mid * c - nc);
    return rb * pb + rs * ps + rc * pc <= r;
}

int main() {
    cin >> str;
    cin >> nb >> ns >> nc;
    cin >> pb >> ps >> pc;
    cin >> r;
    for (char ch : str) {
        if (ch == 'B') b++;
        else if (ch == 'S') s++;
        else c++;
    }
    ll l = 0, r = 1e15;
    while (l < r) {
        ll mid = (l + r + 1) / 2;
        if (check(mid)) l = mid;
        else r = mid - 1;
    }
    cout << l << endl;
    return 0;
}