#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ll n, m;
    cin >> n >> m;

    if (n == m)
        cout << 0;
    else
    {
        ll mul = m / n;
        if ((mul * n) != m)
            cout << -1;
        else
        {
            ll steps = 0;
            bool flag = false;
            while (mul > 1)
            {
                if (mul % 3 == 0)
                    mul /= 3;
                else if (mul % 2 == 0)
                    mul /= 2;
                else
                {
                    flag = true;
                    break;
                }

                steps++;
            }

            if (flag)
                cout << -1;
            else
                cout << steps;
        }
    }
}