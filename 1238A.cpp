#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    ll x, y;
    cin >> x >> y;
    ll diff = x - y;

    if (diff > 1)
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