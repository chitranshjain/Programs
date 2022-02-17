#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    ll n;
    cin >> n;

    vector<ll> arr(n);
    for (ll i = 0; i < n; i++)
        cin >> arr[i];

    ll c0 = 0, c1 = 0, c2 = 0;
    for (ll i = 0; i < n; i++)
    {
        if (arr[i] % 3 == 0)
            c0++;
        else if (arr[i] % 3 == 1)
            c1++;
        else
            c2++;
    }

    ll ideal = n/3;
    ll movesNeeded = ideal - 
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
        solve();
}