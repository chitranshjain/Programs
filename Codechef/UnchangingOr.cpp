#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    ll n;
    cin >> n;

    ll ans = 0;
    ll power = log2(n);

    while (power > 0)
    {
        ll num = pow(2, power);
        ans += n - num;
        n = num - 1;
        power--;
    }

    cout << ans << endl;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
        solve();
}