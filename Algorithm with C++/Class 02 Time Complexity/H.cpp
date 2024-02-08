#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) // O(n)
    {
        cout << i << ": ";
        for (int j = 1; j * j <= n; ++j) // O(sqrt(n))
        {
            cout << j << ' ';
        }
        cout << '\n';
    }
    return 0;
}

// O(n * sqrt(n));