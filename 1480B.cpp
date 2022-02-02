#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool customCompare(pair<ll, ll> a, pair<ll, ll> b)
{
    return a.first < b.first;
}

void solve()
{
    ll heroAttack, heroHealth, n;
    cin >> heroAttack >> heroHealth >> n;

    vector<pair<ll, ll> > monsters(n);

    for (int i = 0; i < n; i++)
        cin >> monsters[i].first;

    for (int i = 0; i < n; i++)
        cin >> monsters[i].second;

    sort(monsters.begin(), monsters.end(), customCompare);

    int i;
    for (i = 0; i < n; i++)
    {
        if (heroHealth <= 0)
            break;

        ll attacksNeeded = (ll)ceil((double)monsters[i].second / heroAttack);

        if (heroHealth <= monsters[i].first * (attacksNeeded - 1))
            break;

        ll heroDamaged = attacksNeeded * monsters[i].first;
        heroHealth = heroHealth - heroDamaged;
    }

    if (i == n)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
        solve();
}