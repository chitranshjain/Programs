#include <bits/stdc++.h>
using namespace std;

int minFlips(string target)
{
    int groups = 1;
    bool initialZero = target[0] == '0' ? true : false;
    char prev;

    if (initialZero)
        prev = '0';
    else
        prev = '1';

    for (int i = 1; i < target.length(); i++)
    {
        if (target[i] == prev)
            continue;
        else
        {
            prev = target[i];
            groups++;
        }
    }

    if (initialZero)
        return groups - 1;
    else
        return groups;
}