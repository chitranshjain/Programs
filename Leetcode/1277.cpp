#include <bits/stdc++.h>
using namespace std;

int countSquares(vector<vector<int> > &matrix)
{
    int ans = 0;

    int m = matrix.size(), n = matrix[0].size();
    vector<vector<int> > dp(m, vector<int>(n));

    for (int i = 0; i < n; i++)
        dp[0][i] = matrix[0][i];

    for (int i = 1; i < m; i++)
        dp[i][0] = matrix[i][0];

    for (int i = 1; i < m; i++)
        for (int j = 1; j < n; j++)
        {
            int a = min(dp[i - 1][j - 1], dp[i][j - 1]);

            if (matrix[i][j] != 0)
                dp[i][j] = min(a, dp[i - 1][j]) + 1;
            else
                dp[i][j] = 0;
        }

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            ans = ans + dp[i][j];

    return ans;
}