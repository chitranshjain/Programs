#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll n, k;
    cin >> n >> k;

    ll odd = ceil((double) (n / 2.0));
    ll even = n - odd;

    if (k <= odd)
    {
        cout << (2 * k) - 1;
    }
    else
    {
        k = k - odd;
        cout<<2*k;
    }
}