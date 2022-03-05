#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    ll n, k;
    cin >> n >> k;

    cout << k / (n * n) << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}