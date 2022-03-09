#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    ll n, x, t;
    cin >> n >> x >> t;

    ll time, participating = 0, sum = 0;
    vector<ll> frustration;
    for (time = 0;; time++)
    {
        if (time % x == 0 && n > 0)
        {
            participating++;
            n--;
        }

        if (time > 0 && time % t == 0 && participating > 0)
        {
            participating--;
            sum = sum + participating;
        }

        if (n == 0 && participating == 0)
            break;
    }

    cout << sum;
    cout << endl;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
        solve();
}