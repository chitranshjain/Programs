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
    for (ll i = 0; i < n;)
    {
        ll curr = a[i];
        if (a[i] > 0)
        {
            ll j;
            for (j = i + 1; j < n; j++)
                if (a[j] < 0)
                    break;

            if (j == n)
            {
                i++;
                break;
            }

            ll newCoins = min(abs(a[i]), abs(a[j]));
            a[i] = a[i] - newCoins;
            a[j] = a[j] + newCoins;
        }
        else
            i++;

        if (a[i] == 0)
            i++;
    }

    for (ll i = 0; i < n;)
    {
        ll curr = a[i];
        if (a[i] < 0)
        {
            ll j;
            for (j = i + 1; j < n; j++)
                if (a[j] > 0)
                    break;

            ll newCoins = min(abs(a[i]), abs(a[j]));
            a[i] = a[i] + newCoins;
            a[j] = a[j] - newCoins;

            coins = coins + newCoins;
        }

        if (a[i] == 0)
            i++;
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