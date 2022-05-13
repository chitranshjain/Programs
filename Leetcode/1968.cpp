#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> rearrangeArray(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int len = nums.size();
        int index = len - 1;

        vector<int> ans(len);

        for (int i = 0; i < len; i += 2)
            ans[i] = nums[index--];

        for (int i = 1; i < len; i += 2)
            ans[i] = nums[index--];

        return ans;
    }
};