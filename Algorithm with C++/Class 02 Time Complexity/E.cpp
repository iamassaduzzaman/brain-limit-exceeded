#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i *= 2) // O(logn)
    {
        cout << i << ' ';
    }
    return 0;
}

// O(logn);