#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    ll n;
    cin >> n;

    vector<ll> a(2*n);
    for (ll i = 0; i < 2 * n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());

    ll mid = n;
    ll mid2 = n - 1;
    cout << abs(a[mid2] - a[mid]) << endl;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
        solve();
}