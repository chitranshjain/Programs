#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    ll a, b;
    cin >> a >> b;

    ll ans = INT_MAX, curr = 0;
    for (ll i = 0; i * i <= a; i++)
    {
        curr = 0;

        if (i == 0 && b == 1)
            continue;

        ll num = a;
        while (num > 0)
        {
            num /= (b + i);
            curr++;
        }

        ans = min(ans, curr + i);
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