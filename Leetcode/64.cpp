#include <bits/stdc++.h>
using namespace std;

// Recursive Solution
class Solution
{
public:
    int cost(int i, int j, vector<vector<int> > &grid)
    {
        if (i < 0 || j < 0)
            return INT_MAX;

        if (i == 0 && j == 0)
            return grid[0][0];

        int up = cost(i - 1, j, grid);
        int left = cost(i, j - 1, grid);

        return grid[i][j] + min(up, left);
    }

    int minPathSum(vector<vector<int> > &grid)
    {
        int r = grid.size(), c = grid[0].size();
        return cost(r - 1, c - 1, grid);
    }
};

// Memoization Solution
class Solution
{
public:
    int cost(int i, int j, vector<vector<int> > &grid, vector<vector<int> > &dp)
    {
        if (i < 0 || j < 0)
            return INT_MAX;

        if (i == 0 && j == 0)
            return grid[0][0];

        if (dp[i][j] != -1)
            return dp[i][j];

        int up = cost(i - 1, j, grid, dp);
        int left = cost(i, j - 1, grid, dp);

        return dp[i][j] = grid[i][j] + min(up, left);
    }

    int minPathSum(vector<vector<int> > &grid)
    {
        int r = grid.size(), c = grid[0].size();
        vector<vector<int> > dp(r, vector<int>(c, -1));
        return cost(r - 1, c - 1, grid, dp);
    }
};

// Tabulation
class Solution
{
public:
    int minPathSum(vector<vector<int> > &grid)
    {
        int r = grid.size(), c = grid[0].size();
        vector<vector<int> > dp(r, vector<int>(c, 0));

        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                int up = -1, left = -1;

                if (i > 0)
                    up = dp[i - 1][j];
                if (j > 0)
                    left = dp[i][j - 1];

                int curr = grid[i][j];

                if (left != -1 && up != -1)
                    curr += min(left, up);
                else if (left != -1)
                    curr += left;
                else if (up != -1)
                    curr += up;

                dp[i][j] = curr;
            }
        }

        return dp[r - 1][c - 1];
    }
};

// Space Optimized
class Solution
{
public:
    int minPathSum(vector<vector<int> > &grid)
    {
        int r = grid.size(), c = grid[0].size();
        vector<int> prev(c, -1);

        for (int i = 0; i < r; i++)
        {
            vector<int> curr(c, -1);
            for (int j = 0; j < c; j++)
            {
                int up = -1, left = -1;

                if (i > 0)
                    up = prev[j];
                if (j > 0)
                    left = curr[j - 1];

                int present = grid[i][j];

                if (left != -1 && up != -1)
                    present += min(left, up);
                else if (left != -1)
                    present += left;
                else if (up != -1)
                    present += up;

                curr[j] = present;
            }

            prev = curr;
        }

        return prev[c - 1];
    }
};