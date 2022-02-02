#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    ll n, k;
    cin >> n >> k;

    ll ans = 0;

    vector<ll> arr(n*k);
    for (ll i = 0; i < n * k; i++)
        cin >> arr[i];

    ll count = 1, leave = n / 2, index = (n * k) - 1;
    for (; count <= k; count++)
    {
        ans = ans + arr[index - leave];
        index = index - leave - 1;
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