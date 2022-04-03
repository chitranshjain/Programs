#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPalindrome(string s)
    {
        int low = 0, high = s.length() - 1;

        while (low < high)
        {
            if (s[low] == ' ' || (!isalpha(s[low]) && !isdigit(s[low])))
                low++;
            else if (s[high] == ' ' || (!isalpha(s[high]) && !isdigit(s[high])))
                high--;
            else if (tolower(s[low]) == tolower(s[high]))
            {
                low++;
                high--;
            }
            else
                return false;
        }

        return true;
    }
};