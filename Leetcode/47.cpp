#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void backtrack(set<vector<int> > &ans, vector<int> &nums, int start, int end)
    {
        if (start == nums.size())
        {
            ans.insert(nums);
            return;
        }

        for (int i = start; i <= end; i++)
        {
            swap(nums[i], nums[start]);
            backtrack(ans, nums, start + 1, end);
            swap(nums[i], nums[start]);
        }
    }

    vector<vector<int> > permuteUnique(vector<int> &nums)
    {
        set<vector<int> > ans;
        backtrack(ans, nums, 0, nums.size() - 1);
        vector<vector<int> > res;

        for (auto v : ans)
            res.push_back(v);

        return res;
    }
};