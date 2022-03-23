#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    ll n, x;
    cin >> n >> x;

    cout << (2 * n) - x + 1 << endl;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
        solve();
}