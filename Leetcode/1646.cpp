#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int getMaximumGenerated(int n)
    {
        if (n <= 1)
            return n;

        vector<int> dp(n + 1);
        dp[0] = 0;
        dp[1] = 1;

        int count = 2;

        for (int i = 1; count < n + 1; i++)
        {
            int index1 = 2 * i, index2 = index1 + 1;

            if (index1 <= n)
            {
                dp[index1] = dp[i];
                count++;
            }

            if (index2 <= n)
            {
                dp[index2] = dp[i] + dp[i + 1];
                count++;
            }
        }

        return *max_element(dp.begin(), dp.end());
    }
};