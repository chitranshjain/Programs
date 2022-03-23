#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    ll n;
    cin >> n;

    vector<ll> s(n), d(n);
    for (ll i = 0; i < n; i++)
        cin >> s[i];

    for (ll i = 0; i < n; i++)
        cin >> d[i];

    ll eqPoints = 0;

    for (ll i = 0; i < n; i++)
        if (s[i] == d[i])
            eqPoints++;

    cout << eqPoints << endl;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
        solve();
}