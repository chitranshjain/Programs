#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

vector<ll> sums(100001, -1);
vector<ll> prods(100001, -1);

void solve(ll n)
{
    ll count = 0;
    ll a, b;
    cin >> a >> b;

    for (ll i = a; i <= b; i++)
    {
        ll sum = 0, prod = 1;
        if (sums[i] == -1)
        {
            ll x = i;
            while (x > 0)
            {
                ll d = x % 10;
                sum += d;
                prod *= d;
                x /= 10;
            }

            sums[i] = sum;
            prods[i] = prod;
        }
        else
        {
            sum = sums[i];
            prod = prods[i];
        }

        if (prod % sum == 0)
            count++;
    }

    cout << "CASE #" << n << ": " << count << endl;
}

int main()
{
    ll t;
    cin >> t;

    ll x = 0;
    while (x < t)
    {
        solve(x + 1);
        x++;
    }
}