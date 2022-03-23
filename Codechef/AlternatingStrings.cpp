#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    ll n;
    cin >> n;

    string s;
    cin >> s;

    ll z = 0, o = 0;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '0')
            z++;
        else
            o++;
    }

    ll ans = 2 * (min(z, o));

    if (ans < n)
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