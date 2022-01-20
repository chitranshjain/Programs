#include <bits/stdc++.h>
using namespace std;

int maxDepth(string s)
{
    int mDepth = INT_MIN, currentDepth = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(')
        {
            currentDepth++;
        }
        else if (s[i] == ')')
        {
            currentDepth--;
        }

        mDepth = max(mDepth, currentDepth);
    }

    return mDepth;
}