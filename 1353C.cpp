#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    ll n;
    cin >> n;

    ll mid = n / 2;
    ll sq = 0;
    for (ll i = 1; i <= mid; i++)
        sq = sq + (i * i);

    cout << sq * 8 << endl;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
        solve();
}