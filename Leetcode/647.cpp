#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countSubstrings(string s)
    {
        int n = s.length(), ans = 0;

        for (int i = 0; i < n; i++)
        {
            int left, right;

            left = i;
            right = i;

            while (left >= 0 && right < n && s[left] == s[right])
            {
                ans++;
                left--;
                right++;
            }

            left = i;
            right = i + 1;

            while (left >= 0 && right < n && s[left] == s[right])
            {
                ans++;
                left--;
                right++;
            }
        }

        return ans;
    }
};