#include <bits/stdc++.h>
using namespace std;

int lengthOfLastWord(string s)
{
    string str = "";
    reverse(s.begin(), s.end());

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != ' ')
            str = str + s[i];
        else
        {
            if (str != "")
            {
                return str.length();
                break;
            }
            else
            {
                str = "";
            }
        }
    }

    return str.length();
}