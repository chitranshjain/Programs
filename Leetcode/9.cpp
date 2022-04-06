#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPalindrome(int x)
    {
        long long int rev = 0;

        if (x < 0)
            return false;

        int n = x;
        while (x)
        {
            int d = x % 10;
            x /= 10;
            rev = rev * 10 + d;
        }

        return rev == n;
    }
};