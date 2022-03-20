#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll sumOfDigits(ll n)
{
    return n % 9;
}

void solve(ll n)
{
    ll a;
    cin >> a;

    ll sum = sumOfDigits(a);
    ll toAdd = 9 - sum;

    if (a % 9 == 0)
        toAdd = 0;

    char c = toAdd + '0';

    string num = to_string(a);
    ll ans = INT_MAX;
    for (ll i = 0; i < num.length(); i++)
    {
        string res = num.substr(0, i) + c + num.substr(i, num.length() - i);
        ll r = stoi(res);
        ans = min(ans, r);
    }

    string res = num + c;
    ll r = stoi(res);
    ans = min(ans, r);

    if (toAdd == 0)
    {
        ans = a;
    }

    cout << "CASE #" << n << ": " << ans << endl;
}

int main()
{
    ll t;
    cin >> t;
    ll x = 0;
    while (x < t)
    {
        solve(x + 1);
        x++;
    }
}