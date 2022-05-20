#include <bits/stdc++.h>
using namespace std;

// Memoization Method
class Solution
{
public:
    int calc(int i, int j, int prev, vector<vector<int> > &grid, vector<vector<int> > &dp)
    {
        int r = grid.size(), c = grid[0].size();

        if (i < 0 || i >= r)
            return 0;

        if (j < 0 || j >= c)
            return 0;

        if (grid[i][j] <= prev)
            return 0;

        if (dp[i][j] != -1)
            return dp[i][j];

        int up = calc(i - 1, j, grid[i][j], grid, dp);
        int down = calc(i + 1, j, grid[i][j], grid, dp);
        int left = calc(i, j - 1, grid[i][j], grid, dp);
        int right = calc(i, j + 1, grid[i][j], grid, dp);

        return dp[i][j] = 1 + max(up, max(down, max(left, right)));
    }

    int longestIncreasingPath(vector<vector<int> > &matrix)
    {
        int r = matrix.size(), c = matrix[0].size();
        vector<vector<int> > dp(r, vector<int>(c, -1));
        int ans = 0;

        for (int i = r - 1; i >= 0; i--)
        {
            for (int j = c - 1; j >= 0; j--)
                ans = max(ans, calc(i, j, INT_MIN, matrix, dp));
        }

        return ans;
    }
};