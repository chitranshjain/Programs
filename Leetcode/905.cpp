#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> sortArrayByParity(vector<int> &nums)
    {
        vector<int> res(nums.size());
        int even = 0, odds = nums.size() - 1;
        int i = 0;
        while (i < nums.size())
        {
            if (nums[i] % 2 == 0)
            {
                res[even++] = nums[i++];
            }
            else
            {
                res[odds--] = nums[i++];
            }
        }

        return res;
    }
};