#include <bits/stdc++.h>
#include <math.h>
using namespace std;
typedef long long int ll;

void solve()
{
    ll n, x, sum = 0, max = 0;
    cin >> n >> x;

    for (ll i = 0; i < n; i++)
    {
        ll y;
        cin >> y;
        sum = sum + y;
        max = max + ceil((double)y / x);
    }

    ll min = ceil((double)sum / x);

    cout << min << " " << max << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}