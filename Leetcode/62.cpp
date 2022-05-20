#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int calc(int m, int n, vector<vector<int> > &dp)
    {
        if (m == 0 && n == 0)
            return dp[0][0];

        if (m < 0 || n < 0)
            return 0;

        if (dp[m][n] != -1)
            return dp[m][n];

        int up = calc(m - 1, n, dp);
        int left = calc(m, n - 1, dp);

        return dp[m][n] = up + left;
    }

    int uniquePaths(int m, int n)
    {
        vector<vector<int> > dp(m, vector<int>(n, -1));
        dp[0][0] = 1;
        return calc(m - 1, n - 1, dp);
    }
};

// Tabulation
int uniquePaths(int m, int n)
{
    vector<vector<int> > dp(m, vector<int>(n, -1));
    dp[0][0] = 1;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 && j == 0)
                continue;
            else
            {
                int up = 0, left = 0;

                if (i > 0)
                    up = dp[i - 1][j];

                if (j > 0)
                    left = dp[i][j - 1];

                dp[i][j] = up + left;
            }
        }
    }

    return dp[m - 1][n - 1];
}

// Space Optimized
int uniquePaths(int m, int n)
{
    vector<int> prev(n, 1);

    for (int i = 1; i < m; i++)
    {
        vector<int> curr(n, 0);
        for (int j = 0; j < n; j++)
        {
            int up = 0, left = 0;

            up = prev[j];

            if (j > 0)
                left = curr[j - 1];

            curr[j] = up + left;
        }

        prev = curr;
    }

    return prev[n - 1];
}