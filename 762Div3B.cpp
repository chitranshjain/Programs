#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
typedef long long int ll;

void solve()
{
    ll n;
    cin >> n;
    unordered_set<ll> numbers;

    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }

    numbers.insert(1);

    for (ll i = 2; i <= n; i++)
    {
        ll sq = i * i, cb = i * i * i;

        if (sq > n)
        {
            break;
        }
        else
        {
            if (sq <= n)
            {
                numbers.insert(sq);
            }

            if (cb <= n)
            {
                numbers.insert(cb);
            }
        }
    }

    cout << numbers.size() << endl;
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