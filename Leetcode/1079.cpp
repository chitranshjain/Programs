#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

class Solution
{
public:
    unordered_set<string> ans;

    void formStrings(string s, int i)
    {
        if (i == s.length())
        {
            ans.insert(s);
            return;
        }

        for (int j = 0; j < s.length(); j++)
        {
            swap(s[i], s[j]);
            ans.insert(s.substr(0, i + 1));
            formStrings(s, i + 1);
            swap(s[i], s[j]);
        }
    }

    int numTilePossibilities(string tiles)
    {
        formStrings(tiles, 0);
        return ans.size();
    }
};