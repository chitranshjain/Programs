#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    ll n;
    cin >> n;

    vector<ll> a(n), b(n);
    for (ll i = 0; i < n; i++)
        cin >> a[i];

    for (ll i = 0; i < n; i++)
        cin >> b[i];

    for (ll i = 0; i < n; i++)
        if (b[i] > a[i])
            swap(a[i], b[i]);

    ll maxA = *max_element(a.begin(), a.end()), maxB = *max_element(b.begin(), b.end());
    cout << maxA * maxB << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}