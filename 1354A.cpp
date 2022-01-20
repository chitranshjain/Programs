#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    if (a <= b)
    {
        cout << b << endl;
        return;
    }
    else
    {
        ll slept = b;
        ll total = b;
        ll cycle = c - d;

        if (cycle <= 0)
        {
            cout << -1 << endl;
            return;
        }
        else
        {
            ll numberOfCycles = (a - slept) / cycle;

            if (numberOfCycles * cycle < (a - slept))
                numberOfCycles++;

            total = total + (numberOfCycles * c);

            cout << total << endl;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}