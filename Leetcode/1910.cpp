#include <bits/stdc++.h>
using namespace std;

string removeOccurrences(string s, string part)
{
    while (s.find(part) != string::npos)
    {
        int len = part.length();
        int index = s.find(part);
        s.erase(index, len);
    }

    return s;
}