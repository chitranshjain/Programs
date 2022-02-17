#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;

    if (a >= c)
        cout << -1 << " ";
    else
        cout << 1 << " ";

    if (c < a * b)
        cout << b << endl;
    else
        cout << -1 << endl;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
        solve();
}