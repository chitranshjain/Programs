#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll n, t;
    cin >> n >> t;

    string res = "";
    if (t != 10)
        for (ll i = 0; i < n; i++)
            res = res + (char)(t + '0');
    else
    {
        if (n < 2)
            cout << -1;
        else
        {
            res = res + "10";
            for (ll i = 0; i < n - 2; i++)
                res = res + '0';
        }
    }

    cout << res;
}