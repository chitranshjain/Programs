#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll n, m;
    cin >> n >> m;
    if (m > n)
        cout << -1;
    else
    {
        ll ans;
        ll minimum = ceil((double)n / 2);
        for (ll i = minimum; i <= n; i++)
        {
            if (i % m == 0)
            {
                ans = i;
                break;
            }
        }

        cout << ans;
    }
}