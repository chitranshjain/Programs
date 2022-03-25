#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string reverseInvertBits(string s)
    {
        string res = "";
        for (int i = s.length() - 1; i >= 0; i--)
        {
            if (s[i] == '0')
                res += '1';
            else
                res += '0';
        }

        return res;
    }

    string generateBits(int n)
    {
        if (n == 1)
        {
            string s = "0";
            return s;
        }

        string nmbits = generateBits(n - 1);
        string res = nmbits + '1' + reverseInvertBits(nmbits);

        return res;
    }

    char findKthBit(int n, int k)
    {
        return generateBits(n)[k - 1];
    }
};