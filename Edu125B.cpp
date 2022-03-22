#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    ll n, b, x, y;
    cin>>n>>b>>x>>y;

    ll prev = 0;
    ll sum = 0;
    for (ll i = 1; i <= n; i++)
    {
        if (prev + x <= b)
            prev = prev + x;
        else
            prev = prev - y;

        sum = sum + prev;
    }

    cout << sum << endl;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
        solve();
}