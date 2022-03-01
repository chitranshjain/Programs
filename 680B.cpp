#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll n, a;
    cin >> n >> a;

    a--;

    vector<ll> criminals(n);
    for (ll i = 0; i < n; i++)
        cin >> criminals[i];

    ll ans = 0;
    for (ll dist = 1; dist < n; dist++)
    {
        int left = a - dist, right = a + dist;
        if (left >= 0 && right <= n - 1)
        {
            if (criminals[left] == 1 && criminals[right] == 1)
                ans = ans + 2;
        }
        else if (left < 0 && right <= n - 1 && criminals[right] == 1)
            ans++;
        else if (right > n - 1 && left >= 0 && criminals[left] == 1)
            ans++;
    }

    if (criminals[a] == 1)
        ans++;

    cout << ans;
}