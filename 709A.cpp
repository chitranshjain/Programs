#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll n, b, d;
    cin >> n >> b >> d;

    vector<ll> arr(n);
    for (ll i = 0; i < n; i++)
        cin >> arr[i];

    ll count = 0, waste = 0;
    for (ll i = 0; i < n; i++)
        if (arr[i] > b)
            continue;
        else
        {
            waste = waste + arr[i];

            if (waste > d)
            {
                waste = 0;
                count++;
            }
        }

    cout << count;
}