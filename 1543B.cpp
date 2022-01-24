#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long int ll;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> arr(n);

    for (ll i = 0; i < n; i++)
        cin >> arr[i];

    ll sum = 0;
    for (ll i = 0; i < n; i++)
        sum = sum + arr[i];

    ll rem = sum % n;
    ll mul = n - rem;
    cout << rem * mul << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}