#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int ans;
    void generateSubsets(vector<int> &nums, int index, int currXor)
    {
        if (index == nums.size())
        {
            ans = ans + currXor;
            return;
        }

        generateSubsets(nums, index + 1, currXor);
        generateSubsets(nums, index + 1, currXor ^ nums[index]);
    }

    int subsetXORSum(vector<int> &nums)
    {
        ans = 0;
        generateSubsets(nums, 0, 0);
        return ans;
    }
};