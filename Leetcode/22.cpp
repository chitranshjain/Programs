#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<string> ans;

    void generate(string s, int opening, int closing, int maxLimit)
    {
        if (opening == maxLimit && closing == maxLimit)
        {
            ans.push_back(s);
            return;
        }

        if (opening < maxLimit)
            generate(s + "(", opening + 1, closing, maxLimit);

        if (closing < opening)
            generate(s + ")", opening, closing + 1, maxLimit);
    }

    vector<string> generateParenthesis(int n)
    {
        generate("", 0, 0, n);
        return ans;
    }
};