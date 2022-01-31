#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

vector<int> partitionLabels(string s)
{
    unordered_map<char, int> last;
    for (int i = s.length() - 1; i >= 0; i--)
        if (last.find(s[i]) == last.end())
            last[s[i]] = i;

    vector<int> ans;
    for (int i = 0; i < s.length();)
    {
        int lastPos = last[s[i]], len = 1;
        i++;
        while (i <= lastPos)
        {
            lastPos = max(lastPos, last[s[i]]);
            len++;
            i++;
        }
        ans.push_back(len);
    }

    return ans;
}