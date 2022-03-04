#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    ll n, k;
    cin >> n >> k;

    vector<ll> a(k);
    for (ll i = 0; i < k; i++)
        cin >> a[i];

    sort(a.begin(), a.end(), greater<ll>());
    ll cat = 0;

    vector<ll> moves(k);
    for (ll i = 0; i < k; i++)
        moves[i] = n - a[i];

    ll i = 0, ans = 0;
    while (cat < a[i] && i < k)
    {
        cat = cat + moves[i];
        i++;
        ans++;
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