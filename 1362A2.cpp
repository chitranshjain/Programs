#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    ll a, b;
    cin >> a >> b;

    if (a < b)
        swap(a, b);

    ll steps = 0;
    while (a > b)
    {
        if (a % 8 == 0 && a / 8 >= b)
            a = a / 8;
        else if (a % 4 == 0 && a / 4 >= b)
            a = a / 4;
        else if (a % 2 == 0 && a / 2 >= b)
            a = a / 2;
        else
            break;

        steps++;
    }

    if (a == b)
        cout << steps << endl;
    else
        cout << -1 << endl;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
        solve();
}