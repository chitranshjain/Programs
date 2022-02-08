#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll n, x;
    cin >> n >> x;

    ll count = 0;
    for (ll i = 1; i * i <= x; i++)
        if (x % i == 0 && (x / i) <= n)
            if ((x / i) != i)
                count = count + 2;
            else
                count++;

    cout << count;
}