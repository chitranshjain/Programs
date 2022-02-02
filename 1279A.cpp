#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    vector<ll> arr(3);
    cin >> arr[0] >> arr[1] >> arr[2];

    sort(arr.begin(), arr.end());

    if (arr[2] <= arr[0] + arr[1] + 1)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}