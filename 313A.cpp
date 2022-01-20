#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll n;
    cin >> n;

    if (n < 0)
    {
        ll ld = n % 10;
        n = n / 10;
        ll lld = n % 10;
        n /= 10;

        ld = -ld;
        lld = -lld;

        n = -n;
        n = n * 10;

        if (ld > lld)
        {
            n = n + lld;
        }
        else
        {
            n = n + ld;
        }

        n = -n;
    }

    cout << n << endl;
}