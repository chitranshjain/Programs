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

    sort(arr.begin(), arr.end());

    ll currentGranies = 1;
    for (ll i = 0; i < n;)
    {
        if (arr[i] <= currentGranies)
        {
            currentGranies++;
            i++;
        }
        else
        {
            ll grannies = currentGranies;
            while (grannies < arr[i] && i < n)
            {
                grannies++;
                i++;
            }

            if (i < n)
                currentGranies = grannies;
        }
    }

    cout << currentGranies << endl;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
        solve();
}