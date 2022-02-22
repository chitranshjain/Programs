#include <bits/stdc++.h>
using namespace std;

int titleToNumber(string columnTitle)
{
    int res = 0;

    for (int i = 0; i < columnTitle.length(); i++)
    {
        int x = columnTitle[i] - 'A';
        x++;

        x = x % 26;

        if (x == 0)
            x = 26;

        res = res * 26 + x;
    }

    return res;
}