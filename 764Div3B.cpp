#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    vector<ll> arr(3, 0);

    for (ll i = 0; i < 3; i++)
        cin >> arr[i];

    bool valid = false;

    ll a = arr[0], b = arr[1], c = arr[2];

    if (((2*b) - c) > 0 && ((2*b) - c) % a == 0)
        valid = true;
    else if ((a + c) % (2*b) == 0)
        valid = true;
    else if (((2*b) - a) > 0 && ((2*b) - a) % c == 0)
        valid = true;

    if (valid)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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