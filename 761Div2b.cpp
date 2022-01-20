#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

void solve()
{
    ll n;
    cin >> n;
    ll a, b, c;

    ll num = n / 2;
    bool answer = false;
    ll stepsAhead = 0;
    while (!answer)
    {
        ll a = num + stepsAhead;
        for (int j = num - 1; j >= 0; j--)
        {
            ll b = j;
            ll c = n - a - b;
            if (__gcd(a, b) == c)
            {
                answer = true;
                cout << a << " " << b << " " << c << endl;
                break;
            }
        }
        stepsAhead++;
    }
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