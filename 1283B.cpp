#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    ll n, k;
    cin >> n >> k;

    ll rem = n % k;
    ll distributed = n - rem;

    if (rem > 0 && rem <= k / 2)
        distributed = distributed + rem;

    if (rem > 0 && rem > k / 2)
        distributed = distributed + k / 2;

    cout << distributed << endl;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
        solve();
}