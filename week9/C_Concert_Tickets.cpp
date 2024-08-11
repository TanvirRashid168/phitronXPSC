#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    multiset<int> tickets;
    vector<int> maxPrices(m);

   
    for (int i = 0; i < n; i++) {
        int price;
        cin >> price;
        tickets.insert(price);
    }
 
   
    for (int i = 0; i < m; i++) {
        cin >> maxPrices[i];
    }

   
    for (int i = 0; i < m; i++) {
        int maxPrice = maxPrices[i];
        auto it = tickets.upper_bound(maxPrice);  
        if (it == tickets.begin()) {
            cout << -1 << endl;  
        } else {
            --it; 
            cout << *it << endl;
            tickets.erase(it); 
        }
    }

    return 0;
}
