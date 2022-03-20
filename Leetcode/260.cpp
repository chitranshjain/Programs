#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> singleNumber(vector<int> &nums)
    {
        unsigned int XOR = 0, res1 = 0, res2 = 0;
        for (int i = 0; i < nums.size(); i++)
            XOR ^= nums[i];

        XOR = XOR & (-XOR);

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] & XOR)
                res1 ^= nums[i];
            else
                res2 ^= nums[i];
        }

        vector<int> ans(2);
        ans[0] = res1;
        ans[1] = res2;

        return ans;
    }
};