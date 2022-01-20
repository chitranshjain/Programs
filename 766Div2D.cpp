#include <bits/stdc++.h>
#include <unordered_set>
#include <algorithm>
#include <numeric>
using namespace std;
typedef long long int ll;

void solve()
{
    ll n;
    cin >> n;

    vector<ll> arr(n);
    unordered_set<ll> distinct;

    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        distinct.insert(arr[i]);
    }

    for (ll i = 0; i < arr.size(); i++)
    {
        for (ll j = i + 1; j < arr.size(); j++)
        {
            ll hcf = __gcd(arr[i], arr[j]);
            if (distinct.find(hcf) == distinct.end())
            {
                distinct.insert(hcf);
                arr.push_back(hcf);
            }
        }
    }

    cout << arr.size() - n << endl;
}

int main()
{
    solve();
}