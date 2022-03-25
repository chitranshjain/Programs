#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    ll x, y, a, b;
    cin >> x >> y >> a >> b;

    ll ans = 0;
    if (x != a && x != b)
        ans++;
    if (y != a && y != b)
        ans++;

    cout << ans << endl;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
        solve();
}