#include <bits/stdc++.h>
using namespace std;

bool isPallindrome(string s)
{
    int low = 0, high = s.length() - 1;
    while (low <= high)
    {
        if (s[low] != s[high])
            return false;

        low++;
        high--;
    }

    return true;
}

string firstPalindrome(vector<string> &words)
{
    for (int i = 0; i < words.size(); i++)
    {
        if (isPallindrome(words[i]))
            return words[i];
    }

    string res = "";
    return res;
}