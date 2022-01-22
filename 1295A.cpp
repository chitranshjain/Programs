#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    ll n;
    cin >> n;

    string ans = "";

    if (n == 2)
        cout << 1 << endl;
    else if (n == 3)
        cout << 7 << endl;
    else
    {
        while (n > 3)
        {
            ans = ans + '1';
            n = n - 2;
        }

        if (n == 3)
            cout << "7" << ans << endl;
        else
            cout << "1" << ans << endl;
    }
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
        solve();
}