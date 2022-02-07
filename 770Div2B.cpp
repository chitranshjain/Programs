#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    ll n, x, y;
    cin >> n >> x >> y;

    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        sum = sum + a;
    }

    x = x + sum;
    if (x % 2 == y % 2)
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