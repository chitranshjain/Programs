#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    ll n;
    cin >> n;

    cout << 2 << endl;
    ll prev = n;
    for (ll i = n - 1; i > 0; i--)
    {
        cout << prev << " " << i << endl;
        prev = (ceil)((prev+i)/2.0);
    }
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
        solve();
}