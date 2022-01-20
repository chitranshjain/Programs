#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll n;
    cin >> n;

    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    ll res = 1, curr = 1;
    for (ll i = 1; i < n; i++)
    {
        if (arr[i] >= arr[i - 1])
        {
            curr++;
        }
        else
        {
            curr = 1;
        }

        res = max(res, curr);
    }

    cout << res;
}