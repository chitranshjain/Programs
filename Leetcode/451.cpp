#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

class compare
{
public:
    bool operator()(pair<char, int> &a, pair<char, int> &b)
    {
        if (a.second != b.second)
        {
            return a.second > b.second;
        }

        return a.first < b.first;
    }
};

class Solution
{
public:
    string frequencySort(string s)
    {
        unordered_map<char, int> m;
        for (auto c : s)
            m[c]++;

        vector<pair<char, int> > v;
        for (auto x : m)
            v.push_back({x.first, x.second});

        sort(v.begin(), v.end(), compare());

        string res = "";
        for (auto c : v)
        {
            for (int i = 0; i < c.second; i++)
                res += c.first;
        }

        return res;
    }
};