#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int> > res;

    void generatePermutations(vector<int> nums, int index)
    {
        if (index == nums.size())
        {
            res.push_back(nums);
            return;
        }

        for (int i = index; i < nums.size(); i++)
        {
            swap(nums[i], nums[index]);
            generatePermutations(nums, index + 1);
            swap(nums[i], nums[index]);
        }
    }

    vector<vector<int> > permute(vector<int> &nums)
    {
        generatePermutations(nums, 0);
        return res;
    }
};