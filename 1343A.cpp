#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;

        int k = 2;

        ll x;
        while (k < 30)
        {
            ll num = n;
            ll power = pow(2, k);
            ll divisor = power - 1;
            if (num % divisor == 0)
            {
                x = num / divisor;
                break;
            }
            else
            {
                k++;
            }
        }

        cout << x << endl;
    }
}