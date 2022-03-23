#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    ll x, y, d;
    cin >> x >> y >> d;

    if (abs(x - y) <= d)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
        solve();
}