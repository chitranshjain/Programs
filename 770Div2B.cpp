#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    ll n, x, y;
    cin >> n >> x >> y;

    vector<ll> arr(n);
    for (ll i = 0; i < n; i++)
        cin >> arr[i];

    for (ll i = 0; i < n; i++)
    {
        if (x + arr[i] <= y)
            x = x + arr[i];
        else
            x = x ^ arr[i];
    }

    if (x == y)
        cout << "Alice" << endl;
    else
        cout << "Bob" << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}