#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll n;
    cin >> n;

    vector<ll> odd;
    ll sum = 0;

    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x % 2 == 0)
            sum = sum + x;
        else
            odd.push_back(x);
    }

    sort(odd.begin(), odd.end(), greater<ll>());
    if (odd.size() % 2 == 0)
        for (int i = 0; i < odd.size(); i++)
            sum = sum + odd[i];
    else
        for (int i = 0; i < odd.size() - 1; i++)
            sum = sum + odd[i];

    cout << sum;
}