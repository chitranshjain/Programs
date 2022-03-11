#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll a, b, s;
    cin >> a >> b >> s;

    a = abs(a);
    b = abs(b);

    if ((s - a - b) >= 0 && (s - a - b) % 2 == 0)
        cout << "Yes";
    else
        cout << "No";
}