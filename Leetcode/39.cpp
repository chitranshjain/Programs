#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int> > ans;

    void generateSubsets(vector<int> candidates, int target, vector<int> v, int index)
    {
        if (target == 0)
        {
            ans.push_back(v);
            return;
        }

        if (target < 0)
            return;

        if (index == candidates.size())
            return;

        generateSubsets(candidates, target, v, index + 1);
        v.push_back(candidates[index]);
        generateSubsets(candidates, target - candidates[index], v, index);
    }

    vector<vector<int> > combinationSum(vector<int> &candidates, int target)
    {
        vector<int> v;
        generateSubsets(candidates, target, v, 0);
        return ans;
    }
};