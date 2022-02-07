#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    int rem = n % 7;
    int other = 7 - rem;

    int d = n % 10;

    if (rem != 0)
    {
        if (d + other >= 10)
            n = n - rem;
        else
            n = n + other;
    }

    cout << n << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}