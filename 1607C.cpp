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

    sort(arr.begin(), arr.end());

    ll ans = arr[0], acc = 0;
    for (ll i = 0; i < n; i++)
    {
        ans = max(ans, arr[i] - acc);
        acc = acc + (arr[i] - acc);
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