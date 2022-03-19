#include <bits/stdc++.h>
using namespace std;

int findComplement(int num)
{
    string res = "";
    while (num)
    {
        int a = num & 1;
        if (a == 1)
            res = res + '0';
        else
            res = res + '1';

        num = num >> 1;
    }

    reverse(res.begin(), res.end());

    int ans = stoi(res, 0, 2);
    return ans;
}