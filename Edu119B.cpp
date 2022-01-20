#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    ll w, h;
    cin >> w >> h;

    vector<ll> x1, x2, y1, y2;

    ll k;
    cin >> k;

    while (k--)
    {
        ll x;
        cin >> x;
        x1.push_back(x);
    }

    cin >> k;

    while (k--)
    {
        ll x;
        cin >> x;
        x2.push_back(x);
    }

    cin >> k;

    while (k--)
    {
        ll x;
        cin >> x;
        y1.push_back(x);
    }

    cin >> k;

    while (k--)
    {
        ll x;
        cin >> x;
        y2.push_back(x);
    }

    ll xMax = abs(x1[0] - x1[x1.size() - 1]);
    xMax = max(xMax, abs(x2[0] - x2[x2.size() - 1]));

    ll yMax = abs(y1[0] - y1[y1.size() - 1]);
    yMax = max(yMax, abs(y2[0] - y2[y2.size() - 1]));

    ll yMaxArea = yMax * w;
    ll xMaxArea = xMax * h;

    if(xMaxArea > yMaxArea)
    {
        cout<<xMaxArea<<endl;
    }
    else
    {
        cout<<yMaxArea<<endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}