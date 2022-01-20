#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

void solve()
{
    int b[7];
    for (int i = 0; i < 7; i++)
    {
        cin >> b[i];
    }

    int a[3];
    a[0] = b[0];
    a[1] = b[1];

    a[2] = b[6] - b[1] - b[0];

    cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}