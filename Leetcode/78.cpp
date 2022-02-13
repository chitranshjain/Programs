#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int> > subset;

    void generateSubsets(vector<int> nums, int index, vector<int> subs)
    {
        if (index == nums.size())
        {
            subset.push_back(subs);
            return;
        }

        generateSubsets(nums, index + 1, subs);
        subs.push_back(nums[index]);
        generateSubsets(nums, index + 1, subs);
    }

    vector<vector<int> > subsets(vector<int> &nums)
    {
        vector<int> a;
        generateSubsets(nums, 0, a);
        return subset;
    }
};