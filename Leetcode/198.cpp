#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int rob(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> dp(n, 0);

        for (int i = 0; i < n; i++)
        {
            int pick = nums[i];
            int dontpick = 0;

            if (i - 2 >= 0)
                pick += dp[i - 2];

            if (i - 1 >= 0)
                dontpick += dp[i - 1];

            dp[i] = max(pick, dontpick);
        }

        return dp[n - 1];
    }
};