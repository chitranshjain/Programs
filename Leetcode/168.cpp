#include <bits/stdc++.h>
using namespace std;

string convertToTitle(int columnNumber)
{
    string res = "";

    while (columnNumber > 0)
    {
        int d = columnNumber % 26;
        char x;
        if (d != 0)
            x = 'A' + (d - 1);
        else
        {
            x = 'Z';
            columnNumber--;
        }
        res = res + x;
        columnNumber = columnNumber / 26;
    }

    reverse(res.begin(), res.end());
    return res;
}
