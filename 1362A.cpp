#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll getR(ll a)
{
    while (a % 2 == 0)
    {
        a /= 2;
    }

    return a;
}

void solve()
{
    ll a, b;
    cin >> a >> b;

    ll steps = 0;
    ll r = getR(a);

    if (getR(b) != r)
        steps = -1;
    else
    {
        b /= a;
        
    }

    cout << steps << endl;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
        solve();
}