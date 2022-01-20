#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for (ll i = 0; i < n; i++)
        cin >> arr[i];

    bool valid = true;

    vector<ll> prefixSum(n);
    prefixSum[0] = arr[0];

    for (ll i = 1; i < n; i++)
        prefixSum[i] = arr[i] + prefixSum[i - 1];

    for (ll i = 1; i < n; i++)
        if (prefixSum[i] < ((i * (i + 1)) / 2))
        {
            valid = false;
            break;
        }

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