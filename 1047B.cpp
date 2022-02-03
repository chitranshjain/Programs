#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll n;
    cin >> n;

    ll ans = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        ll x, y;
        cin >> x >> y;
        ans = max(ans, x + y);
    }

    cout << ans;
}