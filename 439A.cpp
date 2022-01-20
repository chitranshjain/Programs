#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll n, d;
    cin >> n >> d;
    vector<ll> arr(n);

    for (ll i = 0; i < n; i++)
        cin >> arr[i];

    ll jokes = 0;
    for (ll i = 0; i < n; i++)
    {
        d = d - arr[i];

        if (d < 0 || i == n - 1)
            break;

        d = d - 10;
        jokes = jokes + 2;
    }

    if (d < 0)
        cout << -1;
    else
    {
        jokes = jokes + d / 5;
        cout << jokes;
    }
}