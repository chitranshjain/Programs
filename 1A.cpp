#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll n, m, a;
    cin >> n >> m >> a;

    ll x = ceil((double)n / a), y = ceil((double)m / a);
    cout << x * y;
}