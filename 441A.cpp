#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll n, money;
    cin >> n >> money;

    vector<ll> ans;
    for (ll i = 0; i < n; i++)
    {
        ll k;
        cin >> k;

        vector<ll> a(k);
        for (ll j = 0; j < k; j++)
            cin >> a[j];

        sort(a.begin(), a.end());

        if (a[0] < money)
            ans.push_back(i + 1);
    }

    cout << ans.size() << endl;
    for (ll i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
}