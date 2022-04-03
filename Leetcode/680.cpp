#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool checkPallindrome(int i, int j, string s)
    {
        while (i < j)
        {
            if (s[i] != s[j])
                return false;

            i++;
            j--;
        }

        return true;
    }

    bool validPalindrome(string s)
    {
        int low = 0, high = s.length() - 1;
        int diff = 0;

        while (low <= high)
        {
            if (s[low] != s[high])
            {
                return checkPallindrome(low, high - 1, s) || checkPallindrome(low + 1, high, s);
            }

            low++;
            high--;
        }

        return true;
    }
};