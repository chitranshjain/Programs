#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll n;
    cin >> n;
    vector<ll> a(n), p(n);

    for (ll i = 0; i < n; i++)
        cin >> a[i] >> p[i];

    ll minSpend = 0;
    for (ll i = 0; i < n;)
    {
        minSpend = minSpend + (a[i] * p[i]);
        ll currCost = p[i];
        i++;

        while (p[i] > currCost && i < n)
        {
            minSpend = minSpend + (a[i] * currCost);
            i++;
        }
    }

    cout << minSpend;
}