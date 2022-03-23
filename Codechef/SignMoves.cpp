#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    ll n;
    cin >> n;

    ll pos = ceil(n / 2.0);

    if (n % 2 != 0)
        pos = -pos;

    cout << pos << endl;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
        solve();
}