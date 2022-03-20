#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve(ll n)
{
    string needed, typed;
    cin >> needed;
    cin >> typed;

    ll ans = 0, a = 0, b = 0;
    while (a < needed.length() && b < typed.length())
    {
        if (needed[a] == typed[b])
        {
            a++;
            b++;
        }
        else
        {
            ans++;
            b++;
        }
    }

    ans = ans + typed.length() - b;

    if (a < needed.length())
        cout << "CASE #" << n << ": IMPOSSIBLE" << endl;
    else
        cout << "CASE #" << n << ": " << ans << endl;
}

int main()
{
    ll t;
    cin >> t;
    ll x = 0;
    while (x < t)
    {
        solve(x + 1);
        x++;
    }
}