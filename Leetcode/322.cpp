#include <bits/stdc++.h>
using namespace std;

// Recursive Solution
class Solution
{
public:
    int calc(vector<int> &coins, int amount, int i)
    {
        if (i < 0)
        {
            return amount == 0 ? 0 : -1;
        }

        if (amount == 0)
            return 0;

        int rem = amount % coins[i];
        int needed = amount / coins[i];

        int pick = calc(coins, rem, i - 1);
        int dont = calc(coins, amount, i - 1);

        if (pick == -1)
            return dont;
        else if (dont == -1)
            return needed + pick;
        else
            return min(needed + pick, dont);
    }

    int coinChange(vector<int> &coins, int amount)
    {
        if (amount == 0)
            return 0;

        int n = coins.size();
        return calc(coins, amount, n - 1);
    }
};

// Memoization
class Solution
{
public:
    int calc(vector<int> &coins, int i, int amount, vector<vector<int> > &dp)
    {
        if (amount < 0)
            return 1e9;
        if (i < 0)
            return 1e9;
        if (amount == 0)
            return 0;

        if (dp[i][amount] != -2)
            return dp[i][amount];

        if (coins[i] > amount)
            return dp[i][amount] = calc(coins, i - 1, amount, dp);
        return dp[i][amount] = min(1 + calc(coins, i, amount - coins[i], dp), calc(coins, i - 1, amount, dp));
    }

    int coinChange(vector<int> &coins, int amount)
    {
        int n = coins.size();
        vector<vector<int> > dp(n, vector<int>(amount + 1, -2));
        int ans = calc(coins, n - 1, amount, dp);

        return ans == 1e9 ? -1 : ans;
    }
};