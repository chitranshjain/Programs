#include <bits/stdc++.h>
using namespace std;

// Dynamic Programming Optimal Game Strategy
bool stoneGame(vector<int> &piles)
{
    int n = piles.size();
    vector<vector<int> > dp(n, vector<int>(n, 0));

    int sum = 0;
    for (int i = 0; i < n; i++)
        sum = sum + piles[i];

    for (int gap = 0; gap < n; gap++)
    {
        for (int i = 0, j = gap; j < n; i++, j++)
        {
            if (gap == 0)
                dp[i][j] = piles[i];
            else if (gap == 1)
                dp[i][j] = max(piles[i], piles[j]);
            else
            {
                int v1 = piles[i] + min(dp[i + 2][j], dp[i + 1][j - 1]);
                int v2 = piles[j] + min(dp[i + 1][j - 1], dp[i][j - 2]);
                dp[i][j] = max(v1, v2);
            }
        }
    }

    return sum - dp[0][n - 1] > 0;
}