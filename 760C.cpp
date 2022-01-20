#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

void solve()
{
    int n;
    cin >> n;

    vector<ll> arr;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    int res = 0;

    for (int i = 0; i < n; i++)
    {
        int div = arr[i];
        bool possible = true;

        vector<bool> divisibility(n, false);

        for (int i = 0; i < n; i++)
        {
            bool res = arr[i] % div;
            divisibility[i] = res;
        }

        for (int i = 1; i < n; i++)
        {
            if (divisibility[i] == divisibility[i - 1])
            {
                possible = false;
                break;
            }
        }

        if (possible)
        {
            res = div;
            break;
        }
    }

    cout << res << endl;
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