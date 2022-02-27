#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    ll n;
    cin >> n;

    ll a, b;
    if (n % 2 == 0)
        a = n / 2;

    if (n % 4 == 0)
        b = n / 4;

    ll sqrtA = sqrt(a), sqrtB = sqrt(b);

    if (n % 2 == 0 && (sqrtA * sqrtA) == a)
        cout << "YES" << endl;
    else if (n % 4 == 0 && (sqrtB * sqrtB) == b)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}