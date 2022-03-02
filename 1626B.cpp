#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    string x;
    cin >> x;

    string s = x;

    bool done = false;
    for (ll i = s.length() - 1; i > 0; i--)
    {
        ll x = s[i] - '0', y = s[i - 1] - '0';
        if (x + y > 9)
        {
            string sum = to_string(x + y);
            s[i - 1] = sum[0];
            s[i] = sum[1];
            done = true;
            break;
        }
    }

    if (done)
        cout << s << endl;
    else
    {
        int a = s[0] - '0', b = s[1] - '0';
        string res = to_string(a + b) + s.substr(2, s.length() - 2);
        cout << res << endl;
    }
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
        solve();
}