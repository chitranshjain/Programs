#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    ll n;
    cin >> n;

    ll six = 6;

    if (n % 2 != 0)
        n++;

    n = max(n, six);

    ll time = n*5/2;
    cout<<time<<endl;
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