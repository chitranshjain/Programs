#include <bits/stdc++.h>
using namespace std;

int xorOperation(int n, int start)
{
    int xorNum = start;
    for (int i = 1; i < n; i++)
    {
        int newNum = start + (2 * i);
        xorNum = xorNum ^ newNum;
    }

    return xorNum;
}