#include <bits/stdc++.h>
#include <set>
using namespace std;

class Solution
{
public:
    set<vector<int> > ans;

    void generateSubsequences(vector<int> &nums, int index, vector<int> curr)
    {
        if (index == nums.size())
        {
            if (curr.size() >= 2)
                ans.insert(curr);

            return;
        }

        generateSubsequences(nums, index + 1, curr);

        if (curr.empty() || nums[index] >= curr[curr.size() - 1])
            curr.push_back(nums[index]);

        generateSubsequences(nums, index + 1, curr);
    }

    vector<vector<int> > findSubsequences(vector<int> &nums)
    {
        vector<int> a;
        generateSubsequences(nums, 0, a);
        vector<vector<int> > v;
        for (auto x : ans)
            v.push_back(x);

        return v;
    }
};