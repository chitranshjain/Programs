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

    vector<ll> brr(n);
    brr = arr;

    sort(brr.begin(), brr.end());

    ll first = -1, second = -1;
    for (ll i = 0; i < n; i++)
    {
        if (first == -1)
        {
            if (arr[i] != brr[i])
            {
                first = i;
                second = i;
            }
        }
        else
        {
            if (arr[i] < arr[second])
                second = i;
        }
    }

    reverse(arr.begin() + first, arr.begin() + second + 1);

    for (ll i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << endl;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
        solve();
}