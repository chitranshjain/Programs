#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int minSteps(string s, string t)
{
    unordered_map<char, int> m;
    for (int i = 0; i < s.length(); i++)
    {
        if (m.find(s[i]) != m.end())
            m[s[i]]++;
        else
            m[s[i]] = 1;
    }

    for (int i = 0; i < t.length(); i++)
        m[t[i]]--;

    int ans = 0;
    for (auto x : m)
        if (x.second > 0)
            ans = ans + x.second;

    return ans;
}