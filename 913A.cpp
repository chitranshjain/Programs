#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll n, m;
    cin >> n;
    cin >> m;

    ll ans = pow((ll)2, n);
    ans = m % ans;
    cout << ans;
}