#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    ll a, b, n, s;
    cin >> a >> b >> n >> s;

    bool possible = false;

    ll bNeeded = s % n;
    if (bNeeded <= b && (a * n + b) >= s)
        possible = true;

    if (possible)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
        solve();
}