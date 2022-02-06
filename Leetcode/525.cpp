#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int findMaxLength(vector<int> &nums)
{
    int res = 0, count = 0;
    unordered_map<int, vector<int> > m;
    m[0].push_back(-1);
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 0)
            count--;
        else
            count++;

        m[count].push_back(i);
    }

    for (auto x : m)
    {
        sort(x.second.begin(), x.second.end());
        int len = x.second[x.second.size() - 1] - x.second[0];
        res = max(res, len);
    }

    return res;
}