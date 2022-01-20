#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int n;
    cin >> n;

    vector<ll> b(n);
    for (int i = 0; i < n; i++)
        cin >> b[i];

    vector<ll> x(n), a(n);
    a[0] = b[0] - x[0];
    x[0] = 0;
    x[1] = a[0];
    ll maximum = a[0];

    for (int i = 1; i < n; i++)
    {
        int b1 = b[i];
        a[i] = b1 + x[i];
        maximum = max(maximum, a[i]);

        if (i < n - 1)
            x[i + 1] = maximum;
    }

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}