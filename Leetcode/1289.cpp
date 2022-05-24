#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int calc(vector<vector<int> > &grid, int i, int j, vector<vector<int> > &dp)
    {
        if (j < 0 || j >= grid[0].size())
            return 1e9;

        if (i == 0)
            return grid[i][j];

        if (dp[i][j] != -1)
            return dp[i][j];

        int localAns = 1e9;

        for (int k = 0; k < grid[i].size(); k++)
        {
            if (k == j)
                continue;

            localAns = min(localAns, calc(grid, i - 1, k, dp));
        }

        return dp[i][j] = grid[i][j] + localAns;
    }

    int minFallingPathSum(vector<vector<int> > &grid)
    {
        int r = grid.size(), c = grid[0].size();
        int ans = 1e9;

        vector<vector<int> > dp(r, vector<int>(c, -1));

        for (int j = 0; j < c; j++)
            ans = min(ans, calc(grid, r - 1, j, dp));

        return ans;
    }
};