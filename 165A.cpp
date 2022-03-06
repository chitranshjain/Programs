#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    ll n;
    cin >> n;

    vector<pair<int, int> > v;
    for (ll i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;

        v.push_back(make_pair(x, y));
    }

    ll points = 0;
    bool left, right, upper, lower;

    for (ll i = 0; i < n; i++)
    {
        left = false, right = false, upper = false, lower = false;
        for (ll j = 0; j < n; j++)
        {
            if (v[i].first == v[j].first)
            {
                if (v[i].second < v[j].second)
                    lower = true;
                else if (v[i].second > v[j].second)
                    upper = true;
            }
            else if (v[i].second == v[j].second)
            {
                if (v[i].first > v[j].first)
                    right = true;
                else if (v[i].first < v[j].first)
                    left = true;
            }
        }

        if (left && right && upper && lower)
            points++;
    }

    cout << points << endl;
}

int main()
{
    solve();
}