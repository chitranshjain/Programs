#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll n;
    cin >> n;

    ll ans = 0;
    for (ll i = 1; i <= n / 4; i++)
    {
        ll rem = n - (2 * i);
        if (rem % 2 == 0 && rem != 2 * i)
            ans++;
    }

    cout << ans;
}