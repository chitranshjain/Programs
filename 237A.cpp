#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll n;
    vector<pair<int, int> > arr;

    cin >> n;

    for (ll i = 0; i < n; i++)
    {
        ll x, y;
        cin >> x >> y;
        arr.push_back(make_pair(x, y));
    }

    ll maxSame = 1, currSame = 1;
    for (ll i = 1; i < n; i++)
    {
        if (arr[i].first == arr[i - 1].first && arr[i].second == arr[i - 1].second)
        {
            currSame++;
            maxSame = max(maxSame, currSame);
        }
        else
        {
            maxSame = max(maxSame, currSame);
            currSame = 1;
        }
    }

    cout << maxSame << endl;
}