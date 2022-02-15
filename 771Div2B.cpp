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

    bool even = true, odd = true;
    ll prevOdd = -1, prevEven = -1;

    for (ll i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            if (prevEven == -1)
                prevEven = arr[i];
            else if (prevEven > arr[i])
            {
                even = false;
                break;
            }
            else
                prevEven = arr[i];
        }
        else
        {
            if (prevOdd == -1)
                prevOdd = arr[i];
            else if (prevOdd > arr[i])
            {
                odd = false;
                break;
            }
            else
                prevOdd = arr[i];
        }
    }

    if (even && odd)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
        solve();
}