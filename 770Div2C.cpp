#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    ll n, k;
    cin >> n >> k;

    if (k == 1)
    {
        cout << "YES" << endl;
        for (ll i = 0; i < n; i++)
            cout << i + 1 << endl;

        return;
    }

    if ((n * k) % 2 != 0 || n % 2 != 0)
    {
        cout << "NO" << endl;
        return;
    }
    else
    {
        cout << "YES" << endl;
        for (ll i = 1; i <= n; i++)
        {
            for (ll j = 0; j < k; j++)
                cout << i + (j * n) << " ";

            cout << endl;
        }
    }
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
        solve();
}