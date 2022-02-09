#include <bits/stdc++.h>
using namespace std;

int addDigits(int n)
{
    int res = 0;
    while (n > 0)
    {
        res = res + n % 10;
        n /= 10;

        if (n == 0 && res >= 10)
        {
            n = res;
            res = 0;
        }
    }

    return res;
}