#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxScoreSightseeingPair(vector<int> &values)
    {
        int ans = INT_MIN;
        vector<int> dp(values.size());
        dp[0] = values[0];

        for (int i = 1; i < values.size(); i++)
        {
            ans = max(ans, dp[i - 1] + values[i] - i);
            dp[i] = max(dp[i - 1], values[i] + i);
        }

        return ans;
    }
};