#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll numberOfSetBits(ll n)
{
    ll count = 0;
    while (n > 0)
    {
        if (n & 1)
            count++;

        n = (n >> 1);
    }

    return count;
}

void solve()
{
    ll n;
    cin >> n;

    ll sum = n * (n + 1) / 2;
    long long p = 1;
    while (p <= n)
    {
        sum = sum - 2 * p;
        p = p * 2;
    }

    cout << sum << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}