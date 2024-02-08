#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; ++i) // O(n)
    {
        for (int j = 1; j <= n; ++j) // O(n)
        {
            for (int k = 1; k <= n; k++) // O(n)
            {
                sum += i + j + k;
            }
        }
    }
    cout << sum << '\n';
    return 0;
}

// O(n * n * n);