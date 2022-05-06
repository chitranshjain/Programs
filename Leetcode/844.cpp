#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool backspaceCompare(string s, string t)
    {
        stack<char> one, two;

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '#')
            {
                if (!one.empty())
                    one.pop();
            }
            else
                one.push(s[i]);
        }

        for (int i = 0; i < t.length(); i++)
        {
            if (t[i] == '#')
            {
                if (!two.empty())
                    two.pop();
            }
            else
                two.push(t[i]);
        }

        s = "";
        t = "";

        while (!one.empty())
        {
            s += one.top();
            one.pop();
        }

        while (!two.empty())
        {
            t += two.top();
            two.pop();
        }
        return s == t;
    }
};