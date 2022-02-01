#include <bits/stdc++.h>
using namespace std;

int minAddToMakeValid(string s)
{
    int opening = 0, needed = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(')
            opening++;
        else
        {
            if (opening > 0)
                opening--;
            else
                needed++;
        }
    }

    needed = needed + opening;
    return needed;
}