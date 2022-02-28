#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll ceil_div(ll a, ll b)
{
    return (a + b - 1) / b;
}

void solve()
{
    ll x, y, k;
    cin >> x >> y >> k;

    ll sticksNeeded = k + (y * k) - 1;
    ll tradesForSticks = ceil_div(sticksNeeded, x - 1);
    cout << tradesForSticks + k << endl;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
        solve();
}