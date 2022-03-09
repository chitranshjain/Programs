#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void showdq(deque<ll> g)
{
    deque<ll>::iterator it;
    for (it = g.begin(); it != g.end(); ++it)
        cout << *it << " ";
    cout << '\n';
}

void solve()
{
    ll n;
    cin >> n;

    vector<ll> arr(n);
    for (ll i = 0; i < n; i++)
        cin >> arr[i];

    deque<ll> dq;
    dq.push_back(arr[0]);

    for (ll i = 1; i < n; i++)
    {
        if (arr[i] < dq.front())
            dq.push_front(arr[i]);
        else
            dq.push_back(arr[i]);
    }

    showdq(dq);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}