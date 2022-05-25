#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Memoization
    int calc(vector<int> &nums, int i, int prev, vector<vector<int> > &dp)
    {
        if (i >= nums.size())
            return 0;

        if (dp[i][prev + 1] != -1)
            return dp[i][prev + 1];

        int pick = -1e9;
        if (prev == -1 || nums[i] > nums[prev])
            pick = 1 + calc(nums, i + 1, i, dp);
        int left = calc(nums, i + 1, prev, dp);

        return dp[i][prev + 1] = max(pick, left);
    }

    int lengthOfLIS(vector<int> &nums)
    {
        int n = nums.size();
        vector<vector<int> > dp(n, vector<int>(n + 1, -1));

        return calc(nums, 0, -1, dp);
    }

    // Tabulation
    int lengthOfLIS(vector<int> &nums)
    {
        int n = nums.size();

        vector<int> dp(n, 1);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (nums[i] > nums[j])
                    dp[i] = max(dp[i], 1 + dp[j]);
            }
        }

        return *max_element(dp.begin(), dp.end());
    }
};