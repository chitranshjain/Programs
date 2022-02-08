#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    ll x, y;
    cin >> x >> y;

    ll a, b;
    cin >> a >> b;

    ll ans = 0;
    if (b > (2 * a))
        ans = ans + (a * x) + (a * y);
    else
    {
        ll mini = min(x, y);

        ans = ans + (mini * b);
        x = x - mini;
        y = y - mini;

        ans = ans + (a * x) + (a * y);
    }

    cout << ans << endl;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
        solve();
}