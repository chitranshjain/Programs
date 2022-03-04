#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    ll n;
    cin >> n;

    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());

    ll low = 2, high = n - 2;
    ll sumBlue = a[0] + a[1], sumRed = a[n - 1];
    ll countBlue = 2, countRed = 1;

    while (low < high - 1)
    {
        if (sumRed > sumBlue)
            break;

        sumBlue = sumBlue + a[low];
        sumRed = sumRed + a[high];
        low++;
        high--;
        countBlue++;
        countRed++;
    }

    if (sumRed > sumBlue && countBlue > countRed)
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