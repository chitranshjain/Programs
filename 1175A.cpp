#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll moves = 0;

    if (k == 1)
    {
        cout << n << endl;
        return;
    }

    while (n > 0)
    {
        ll x = 0;
        if (n % k == 0)
            n = n / k;
        else
        {
            x = n % k;
            n = n - x;
        }

        if (x > 0)
            moves = moves + x;
        else
            moves++;
    }

    cout << moves << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}