#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int res = 0, curr = 0;
        int i = 0, j = 0;
        unordered_set<char> alpha;

        while (i < s.length() && j < s.length())
        {
            if (alpha.find(s[j]) == alpha.end())
            {
                alpha.insert(s[j]);
                j++;
            }
            else
            {
                alpha.erase(s[i]);
                i++;
            }

            curr = j - i;
            res = max(res, curr);
        }

        return res;
    }
};