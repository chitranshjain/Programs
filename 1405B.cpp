#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    ll n;
    cin >> n;

    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
        cin >> a[i];

    ll coins = 0;
    for (ll i = 0; i < n; i++)
    {
        coins = coins + a[i];
        if (coins < 0)
            coins = 0;
    }

    cout << coins << endl;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
        solve();
}