#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    ll n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    string rev = string(s.rbegin(), s.rend());

    ll ans = 0;
    if (k == 0)
    {
        cout << 1 << endl;
        return;
    }

    if (rev == s)
        cout << 1 << endl;
    else
        cout << 2 << endl;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
        solve();
}