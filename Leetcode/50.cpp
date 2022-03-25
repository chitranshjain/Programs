#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    double myPow(double x, long long int n)
    {
        if (n == 0)
            return 1.0;

        if (n < 0)
        {
            n = -n;
            x = 1 / x;
        }

        double temp = myPow(x, n / 2);

        if (n % 2 == 0)
            temp = temp * temp;
        else
            temp = x * temp * temp;

        return temp;
    }
};