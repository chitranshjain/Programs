#include <bits/stdc++.h>
using namespace std;

// Recursive Solution
class Solution
{
public:
    int calc(vector<vector<int> > &t, int i, int j, int last)
    {
        if (i == last)
            return t[i][j];

        if (j < 0 || j >= t[i].size())
            return INT_MAX;

        int down = calc(t, i + 1, j, last);
        int diag = calc(t, i + 1, j + 1, last);

        return t[i][j] + min(down, diag);
    }

    int minimumTotal(vector<vector<int> > &triangle)
    {
        int r = triangle.size();
        return calc(triangle, 0, 0, r - 1);
    }
};

// Memoization
class Solution
{
public:
    int calc(vector<vector<int> > &t, int i, int j, int last, vector<vector<int> > &dp)
    {
        if (i == last)
            return t[i][j];

        if (j < 0 || j >= t[i].size())
            return INT_MAX;

        if (dp[i][j] != 1e9)
            return dp[i][j];

        int down = calc(t, i + 1, j, last, dp);
        int diag = calc(t, i + 1, j + 1, last, dp);

        return dp[i][j] = t[i][j] + min(down, diag);
    }

    int minimumTotal(vector<vector<int> > &triangle)
    {
        int r = triangle.size();
        vector<vector<int> > dp(r, vector<int>(triangle[r - 1].size(), 1e9));
        return calc(triangle, 0, 0, r - 1, dp);
    }
};

// Tabulation
class Solution
{
public:
    int minimumTotal(vector<vector<int> > &triangle)
    {
        int r = triangle.size();
        vector<vector<int> > dp(r, vector<int>(triangle[r - 1].size(), 1e9));

        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < triangle[i].size(); j++)
            {
                if (i == 0 && j == 0)
                {
                    dp[i][j] = triangle[i][j];
                    continue;
                }
                else
                {
                    int up = 1e9, diag = 1e9;

                    if (i > 0)
                        up = dp[i - 1][j];
                    if (i > 0 && j > 0)
                        diag = dp[i - 1][j - 1];

                    dp[i][j] = triangle[i][j] + min(up, diag);
                }
            }
        }

        return *min_element(dp[r - 1].begin(), dp[r - 1].end());
    }
};

// Space Optimized
class Solution
{
public:
    int minimumTotal(vector<vector<int> > &triangle)
    {
        int r = triangle.size(), c = triangle[r - 1].size();
        vector<int> prev(c, 1e9);

        for (int i = 0; i < r; i++)
        {
            vector<int> curr(c, 1e9);
            for (int j = 0; j < triangle[i].size(); j++)
            {
                if (i == 0 && j == 0)
                {
                    curr[j] = triangle[i][j];
                    continue;
                }
                else
                {
                    int up = 1e9, diag = 1e9;

                    if (i > 0)
                        up = prev[j];
                    if (i > 0 && j > 0)
                        diag = prev[j - 1];

                    curr[j] = triangle[i][j] + min(up, diag);
                }
            }

            prev = curr;
        }

        return *min_element(prev.begin(), prev.end());
    }
};