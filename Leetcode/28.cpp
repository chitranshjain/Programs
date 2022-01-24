#include <bits/stdc++.h>
using namespace std;

int strStr(string haystack, string needle)
{
    if (needle == "")
        return 0;

    if (haystack.find(needle) != string::npos)
        return haystack.find(needle);
    else
        return -1;
}