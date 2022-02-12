#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    if (n == 2)
    {
        cout << -1 << endl;
        return;
    }

    int odd = 1, even = 2;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (odd <= (n * n))
            {
                cout << odd << " ";
                odd = odd + 2;
                continue;
            }
            else
            {
                cout << even << " ";
                even = even + 2;
                continue;
            }
        }
        cout << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}