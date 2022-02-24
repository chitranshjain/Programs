#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll maximumArrayContribution(vector<ll> arr)
{
    ll curr = arr[0], res = arr[0];
    for (ll i = 1; i < arr.size(); i++)
    {
        curr = curr + arr[i];
        res = max(res, curr);
    }

    return max((ll)0, res);
}

void solve()
{
    ll n;
    cin >> n;

    vector<ll> r(n);
    for (ll i = 0; i < n; i++)
        cin >> r[i];

    ll m;
    cin >> m;

    vector<ll> b(m);
    for (ll i = 0; i < m; i++)
        cin >> b[i];

    ll i = 0, j = 0;

    ll maxA = maximumArrayContribution(r), maxB = maximumArrayContribution(b);
    ll res = maxA + maxB;

    cout << res << endl;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
        solve();
}