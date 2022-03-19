#include <bits/stdc++.h>
using namespace std;

int binaryGap(int n)
{
    int curr = 0, res = 0;
    bool first = false;
    while (n)
    {
        if (n & 1 == 1)
        {
            if (!first)
            {
                first = true;
                continue;
            }

            res = max(res, curr);
            curr = 0;
        }

        n = n >> 1;

        if (first)
            curr++;
    }

    return res;
}