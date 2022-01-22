#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll n, k;
    cin >> n >> k;

    vector<ll> f(n), t(n);
    for (ll i = 0; i < n; i++)
        cin >> f[i] >> t[i];

    ll res = INT_MIN, curr = 0;
    for (ll i = 0; i < n; i++)
    {
        if (t[i] > k)
            curr = f[i] - t[i] + k;
        else
            curr = f[i];

        res = max(res, curr);
    }

    cout << res;
}