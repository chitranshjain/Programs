#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll n, m;
    cin >> n >> m;

    vector<ll> a(n), b(m);
    for (ll i = 0; i < n; i++)
        cin >> a[i];

    for (ll i = 0; i < m; i++)
        cin >> b[i];

    for (ll i = 1; i < n; i++)
        a[i] = a[i] + a[i - 1];

    ll i = 0;
    for (ll j = 0; j < m;)
    {
        ll dorm, room;
        if (b[j] <= a[i])
        {
            dorm = i + 1;
            if (i == 0)
                room = b[j];
            else
                room = b[j] - a[i - 1];

            cout << dorm << " " << room << endl;
            j++;
        }
        else
            i++;
    }
}