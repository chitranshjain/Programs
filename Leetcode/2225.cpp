#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    vector<vector<int> > findWinners(vector<vector<int> > &matches)
    {
        unordered_map<int, int> losses;
        for (int i = 0; i < matches.size(); i++)
        {
            if (losses.find(matches[i][0]) == losses.end())
                losses[matches[i][0]] = 0;

            if (losses.find(matches[i][1]) == losses.end())
                losses[matches[i][1]] = 0;

            losses[matches[i][1]]++;
        }

        vector<int> zero, ones;

        for (auto x : losses)
        {
            if (x.second == 0)
                zero.push_back(x.first);
            else if (x.second == 1)
                ones.push_back(x.first);
        }

        sort(zero.begin(), zero.end());
        sort(ones.begin(), ones.end());

        vector<vector<int> > ans = {zero, ones};
        return ans;
    }
};