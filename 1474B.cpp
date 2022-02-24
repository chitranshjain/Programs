#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool isPrime(ll n)
{
    if (n == 2 || n == 3)
        return true;

    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (ll i = 5; i * i <= n; i = i + 6)
    {
        if (n % i == 0)
            return false;

        if (n % (i + 2) == 0)
            return false;
    }

    return true;
}

ll nextPrime(ll n)
{
    if (isPrime(n))
        return n;

    while (!isPrime(n))
    {
        n++;
    }

    return n;
}

void solve()
{
    ll d;
    cin >> d;

    ll a = d + 1;
    a = nextPrime(a);

    ll b = a + d;
    b = nextPrime(b);

    ll ans = a * b;

    cout << ans << endl;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
        solve();
}