#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i * i <= n; ++i) // here i * i refers to sqrt(n)
    {
        cout << i << ' ';
    }
    return 0;
}

// O(sqrt(n));