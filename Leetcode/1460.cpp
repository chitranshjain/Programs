#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

class Solution
{
public:
    bool hasAllCodes(string s, int k)
    {
        int needed = 1 << k;
        unordered_set<string> hs;

        for (int i = k; i <= s.length(); i++)
        {
            string sub = s.substr(i - k, k);

            if (hs.find(sub) == hs.end())
            {
                hs.insert(sub);
                needed--;
            }

            if (needed == 0)
                return true;
        }

        return false;
    }
};