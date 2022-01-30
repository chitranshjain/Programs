#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    ll x1, x2, p1, p2;
    cin >> x1 >> p1;
    cin >> x2 >> p2;

    if (p1 == p2)
    {
        if (x1 > x2)
            cout << ">" << endl;
        else if (x1 < x2)
            cout << "<" << endl;
        else
            cout << "=" << endl;
        return;
    }
    else
    {
        ll res1 = x1 * pow(10, p1);
        ll res2 = x2 * pow(10, p2);

        if (res1 > res2)
            cout << ">" << endl;
        else if (res2 > res1)
            cout << "<" << endl;
        else
            cout << "=" << endl;
        return;
    }
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
        solve();
}