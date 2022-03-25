#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    vector<ll> arr(4);
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];

    sort(arr.begin(), arr.end());

    ll x = -1, y = -1;
    ll mul = arr[3];
    ll add = arr[2];

    for (ll i = 0; i < 2; i++)
    {
        ll a = (add + arr[i]) / 2;
        ll b = add - a;

        if ((a * b) == mul && (a + b) == add)
        {
            if ((i == 0 && ((a / b) == arr[1])) || (i == 1 && ((a / b) == arr[0])))
            {
                x = a;
                y = b;
                break;
            }
        }
    }

    cout << x << " " << y << endl;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
        solve();
}