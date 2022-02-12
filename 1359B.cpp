#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    ll n, m, x, y;
    cin >> n >> m >> x >> y;

    char grid[n][m];
    for (ll i = 0; i < n; i++)
        for (ll j = 0; j < m; j++)
            cin >> grid[i][j];

    ll cost = 0;
    if ((2 * x) < y)
    {
        ll count = 0;
        for (ll i = 0; i < n; i++)
            for (ll j = 0; j < m; j++)
                if (grid[i][j] == '.')
                    count++;

        cost = count * x;
    }
    else
    {
        ll count1 = 0, count2 = 0;
        for (ll i = 0; i < n; i++)
            for (ll j = 0; j < m; j++)
            {
                if (grid[i][j] == '.')
                {
                    if (j + 1 < m && grid[i][j + 1] == '.')
                    {
                        count2++;
                        j++;
                    }
                    else
                        count1++;
                }
            }

        cost = (count1 * x) + (count2 * y);
    }

    cout << cost << endl;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
        solve();
}