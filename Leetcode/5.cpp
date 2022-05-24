#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string longestPalindrome(string s)
    {
        int n = s.length(), ans = 0;
        string res = "";

        for (int i = 0; i < n; i++)
        {
            int beg = i, end = i;
            int len = 0;

            while (beg >= 0 && end < n && s[beg] == s[end])
            {
                len = end - beg + 1;

                if (len > ans)
                {
                    ans = len;
                    res = s.substr(beg, len);
                }

                beg--;
                end++;
            }

            beg = i;
            end = i + 1;
            len = 0;
            while (beg >= 0 && end < n && s[beg] == s[end])
            {
                len = end - beg + 1;

                if (len > ans)
                {
                    ans = len;
                    res = s.substr(beg, len);
                }

                beg--;
                end++;
            }
        }

        return res;
    }
};