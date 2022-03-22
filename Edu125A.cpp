#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x, y;
    cin >> x >> y;

    if (x == 0 && y == 0)
    {
        cout << 0 << endl;
        return;
    }

    int d = sqrt((x * x) + (y * y));

    if (d * d == ((x * x) + (y * y)))
        cout << 1 << endl;
    else
        cout << 2 << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}