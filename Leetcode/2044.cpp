#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int count = 0;

    void generateSubsets(vector<int> subset, int index, vector<int> nums, int maxOr, int currOr)
    {
        if (index == nums.size())
        {
            if (currOr == maxOr)
                count++;

            return;
        }

        if (currOr == maxOr)
        {
            count++;
            count = count + pow(2, nums.size() - index) - 1;
        }
        else
        {
            generateSubsets(subset, index + 1, nums, maxOr, currOr);
            subset.push_back(nums[index]);
            generateSubsets(subset, index + 1, nums, maxOr, currOr | nums[index]);
        }
    }

    int countMaxOrSubsets(vector<int> &nums)
    {
        int maxOr = 0;
        for (int i = 0; i < nums.size(); i++)
            maxOr = maxOr | nums[i];

        vector<int> sub;
        generateSubsets(sub, 0, nums, maxOr, 0);

        return count;
    }
};