#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve()
{
    vector<ll> balls(4);
    cin >> balls[0] >> balls[1] >> balls[2] >> balls[3];

    ll odd = 0, zero = 0;
    for (int i = 0; i < 4; i++)
    {
        if (balls[i] % 2 != 0)
            odd++;
    }

    if (odd <= 1)
    {
        cout << "Yes" << endl;
        return;
    }

    bool flag = true;
    for (int i = 0; i < 3; i++)
    {
        if (balls[i] != 0)
            balls[i]--;
        else
        {
            flag = false;
            break;
        }
    }

    balls[3] = balls[3] + 3;

    odd = 0;
    for (int i = 0; i < 4; i++)
    {
        if (balls[i] % 2 != 0)
            odd++;
    }

    if (odd <= 1 && flag)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}