#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    ll n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr.begin(), arr.end());

    if (n == 2)
    {
        cout << 0 << endl;
        return;
    }

    ll count = 0;
    for (int i = 1; i < n - 1; i++)
        if (arr[i] > arr[0] && arr[i] < arr[n - 1])
            count++;

    cout << count << endl;
}

int main()
{
    solve();
}