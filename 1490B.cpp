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

    ll count[3] = {0, 0, 0};
    for (ll i = 0; i < n; i++)
    {
        if (arr[i] % 3 == 0)
            count[0]++;
        else if (arr[i] % 3 == 1)
            count[1]++;
        else
            count[2]++;
    }

    ll moves = 0, ideal = n / 3;

    for (ll i = 0; i < 2; i++)
    {
        for (ll i = 0; i < 3; i++)
        {
            if (count[i] > ideal)
            {
                ll newMoves = count[i] - ideal;
                count[(i + 1) % 3] = count[(i + 1) % 3] + newMoves;
                count[i] = ideal;
                moves = moves + newMoves;
            }
        }
    }

    cout << moves << endl;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
        solve();
}