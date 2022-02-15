#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<string> res;

    void generateStrings(string s, string a, int index)
    {
        if (index == s.length())
        {
            res.push_back(a);
            return;
        }

        if (isalpha(s[index]) == 0)
        {
            generateStrings(s, a + s[index], index + 1);
        }
        else if (isalpha(s[index]) && isupper(s[index]))
        {
            generateStrings(s, a + s[index], index + 1);
            char x = tolower(s[index]);
            generateStrings(s, a + x, index + 1);
        }
        else
        {
            generateStrings(s, a + s[index], index + 1);
            char x = toupper(s[index]);
            generateStrings(s, a + x, index + 1);
        }
    }

    vector<string> letterCasePermutation(string s)
    {
        generateStrings(s, "", 0);
        return res;
    }
};