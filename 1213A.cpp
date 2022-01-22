#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll n;
    cin >> n;

    vector<ll> arr(n);
    for (ll i = 0; i < n; i++)
        cin >> arr[i];

    ll countOdd = 0, countEven = 0;
    for (ll i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
            countEven++;
        else
            countOdd++;
    }

    cout << min(countOdd, countEven);
}