#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll n, m;
    cin >> n >> m;

    ll currPos = 1;
    vector<ll> tasks(m);
    for (ll i = 0; i < m; i++)
        cin >> tasks[i];

    ll time = 0;
    for (ll i = 0; i < m; i++)
    {
        ll task = tasks[i];
        if (task >= currPos)
            time = time + task - currPos;
        else
            time = time + n - currPos + task;

        currPos = task;
    }

    cout << time;
}