#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll getSmallestDivisor(ll n)
{
    for (ll i = 2; i <= n; i++)
    {
        if(n%i == 0)
        {
            return i;
        }
    }

    return n;
}

void solve()
{
    ll n, k;
    cin >> n >> k;
    
    if(n%2 == 0)
    {
        n = n + (2*k);
    }
    else
    {
        k--;
        n = n + getSmallestDivisor(n) + 2*k;
    }

    cout << n << endl;
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