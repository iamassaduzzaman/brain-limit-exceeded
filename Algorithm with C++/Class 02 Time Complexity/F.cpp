#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) // O(n)
    {
        for (int j = 1; j <= n; j *= 2) // O(logn)
        {
            cout << i << ' ' << j << '\n';
        }
    }
    return 0;
}

// O(n logn);