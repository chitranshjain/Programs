#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Recursive Solution
    int minCost(vector<int> &cost, int ind, int points)
    {
        if (ind >= cost.size())
            return 0;

        points += cost[ind] + min(minCost(cost, ind + 1, points), minCost(cost, ind + 2, points));
        return points;
    }

    // Dynamic Programming Solution
    int minCostClimbingStairs(vector<int> &cost)
    {
        cost.push_back(0);
        vector<int> dp(cost.size());

        dp[0] = cost[0];
        dp[1] = cost[1];

        for (int i = 2; i < cost.size(); i++)
        {
            dp[i] = cost[i] + min(dp[i - 1], dp[i - 2]);
        }

        return dp[cost.size() - 1];
    }
};