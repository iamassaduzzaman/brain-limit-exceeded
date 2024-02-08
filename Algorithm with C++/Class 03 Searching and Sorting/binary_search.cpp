#include <bits/stdc++.h>
using namespace std;


int main() {

    // reading input
    int n, x; cin >> n >> x;
    int a[n + 1];
    for(int i = 1; i <= n; ++i) {
        cin >> a[i];
    }

    // binary search
    int l = 1, r = n;
    bool found = false;
    while(l <= r) {
        int mid = (l + r) / 2;
        
        if(a[mid] == x) {
            found = true;
        }

        if(a[mid] < x) {
            l = mid + 1;
        }
        else {
            r = mid - 1;
        }
    }

    // whether value found or not
    if(found) {
        cout << "Yayy, value found" << '\n';
    }
    else {
        cout << "Opps, not found" << '\n';
    }
    return 0;
}