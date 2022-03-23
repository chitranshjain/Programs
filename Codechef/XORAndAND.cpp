#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
typedef long long int ll;

ll combinations(ll n)
{
    return (n * (n - 1)) / 2;
}

void solve()
{
    ll n;
    cin >> n;

    unordered_map<int, int> freq;

    vector<ll> arr(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        freq[arr[i]]++;
    }

    sort(arr.begin(), arr.end());
    vector<ll>::iterator ip = unique(arr.begin(), arr.end());
    arr.resize(distance(arr.begin(), ip));

    ll count = 0;
    for (ll i = 0; i < arr.size(); i++)
    {
        ll XOR = arr[i - 1] ^ arr[i];
        ll AND = arr[i - 1] & arr[i];

        if (XOR < AND)
            count += freq[arr[i - 1]] * freq[arr[i]];
    }

    for (auto x : freq)
        count += combinations(x.second);

    cout << count << endl;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
        solve();
}