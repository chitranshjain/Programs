#include <bits/stdc++.h>
using namespace std;

string restoreString(string s, vector<int> &indices)
{

    
    string res = "";
    char str[s.length()];

    for (int i = 0; i < s.length(); i++)
    {
        str[indices[i]] = s[i];
    }

    for (int i = 0; i < s.length(); i++)
    {
        res = res + str[i];
    }

    return res;
}