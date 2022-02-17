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

    sort(arr.begin(), arr.end());

    bool flag = false;
    for (ll i = 0; i < n - 2; i++)
        if (arr[i] + arr[i + 1] > arr[i + 2])
        {
            flag = true;
            break;
        }

    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}