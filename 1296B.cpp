#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    ll n, spent = 0;
    cin >> n;

    while (n > 9)
    {
        ll div = n / 10;
        spent += n - n % 10;
        n = n % 10;
        n += div;
    }

    cout << spent + n << endl;
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