#include <bits/stdc++.h>
using namespace std;

int hammingDistance(int x, int y)
{
    int count = 0;
    while (x || y)
    {
        int a = x & 1;
        int b = y & 1;
        if (a != b)
            count++;

        x = x >> 1;
        y = y >> 1;
    }

    return count;
}