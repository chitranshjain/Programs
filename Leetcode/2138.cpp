#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<string> divideString(string s, int k, char fill)
    {
        int rem, len = s.length();

        if (len % k == 0)
            rem = 0;
        else
        {
            rem = len % k;
            rem = k - rem;

            for (int i = 0; i < rem; i++)
                s += fill;
        }

        vector<string> ans;
        for (int i = 0; i < len; i += k)
            ans.push_back(s.substr(i, k));

        return ans;
    }
};