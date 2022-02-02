#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    ll n, k;
    cin >> n >> k;

    vector<int> prices(n);
    for (int i = 0; i < n; i++)
        cin >> prices[i];

    sort(prices.begin(), prices.end());

    int maxPrice = prices[0] + k;

    for (int i = 0; i < n; i++)
        if (abs(maxPrice - prices[i]) > k)
        {
            cout << -1 << endl;
            return;
        }

    cout << maxPrice << endl;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
        solve();
}