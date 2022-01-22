#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;
typedef long long int ll;

void solve()
{
    ll n;
    cin >> n;

    vector<ll> arr(n);
    for (ll i = 0; i < n; i++)
        cin >> arr[i];

    unordered_set<ll> s1, s2;
    sort(arr.begin(), arr.end());

    for (ll i = 0; i < n; i++)
    {
        if (s1.find(arr[i]) == s1.end())
            s1.insert(arr[i]);
        else
            s2.insert(arr[i]);
    }

    ll min1 = INT_MIN, min2 = INT_MIN;
    for (ll i = 0; i <= 100; i++)
    {
        if (s1.find(i) == s1.end() && min1 == INT_MIN)
            min1 = i;

        if (s2.find(i) == s2.end() && min2 == INT_MIN)
            min2 = i;
    }

    cout << min1 + min2 << endl;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
        solve();
}