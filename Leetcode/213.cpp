#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int rob(vector<int> &nums)
    {
        int n = nums.size();

        if (n == 1)
            return nums[0];

        if (n == 2)
            return max(nums[0], nums[1]);

        vector<int> dp1(n - 1, 0), dp2(n - 1, 0);

        dp1[0] = nums[0];
        dp2[0] = nums[1];

        for (int i = 1; i < n - 1; i++)
        {
            int pick = nums[i];
            int dontpick = 0;

            if (i - 2 >= 0)
                pick += dp1[i - 2];

            if (i - 1 >= 0)
                dontpick += dp1[i - 1];

            dp1[i] = max(pick, dontpick);
        }

        for (int i = 2; i < n; i++)
        {
            int pick = nums[i];
            int dontpick = 0;

            if (i - 3 >= 0)
                pick += dp2[i - 3];

            if (i - 2 >= 0)
                dontpick += dp2[i - 2];

            dp2[i - 1] = max(pick, dontpick);
        }

        return max(dp1[n - 2], dp2[n - 2]);
    }
};