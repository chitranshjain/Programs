#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    ll n;
    cin >> n;

    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
        cin >> a[i];

    if (n > 2)
    {
        ll ans;
        sort(a.begin(), a.end());

        vector<ll> b(n);

        ll index = 0;
        for (ll i = 1; i < n; i = i + 2, index++)
            b[i] = a[index];

        ans = 0;

        for (ll i = 0; i < n; i = i + 2, index++)
            b[i] = a[index];

        for (ll i = 1; i < n; i = i + 2)
            if (b[i] < b[i - 1] && b[i] < b[i + 1])
                ans++;

        cout << ans << endl;
        for (ll i = 0; i < n; i++)
            cout << b[i] << " ";

        cout << endl;
    }
    else
    {
        cout << 0 << endl;
        for (ll i = 0; i < n; i++)
            cout << a[i] << " ";

        cout << endl;
    }
}

int main()
{
    solve();
}