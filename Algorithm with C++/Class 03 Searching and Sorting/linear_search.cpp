#include <bits/stdc++.h>
using namespace std;

int main() {

    // reading input
    int n, x; cin >> n >> x;
    int a[n + 1];
    for(int i = 1; i <= n; ++i) {
        cin >> a[i];
    }
    
    // searching for x 
    for(int i = 1; i <= n; ++i) {
        if(a[i] == x) {
            cout << "Yayyy, found!" << '\n';
            return 0;
        }
    }

    cout << "Opps, not found!" << '\n';
    return 0;
}