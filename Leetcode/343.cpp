#include <bits/stdc++.h>
using namespace std;

int integerBreak(int n)
{
    vector<int> dp(n + 1, -1);
    dp[0] = 0;
    dp[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        for (int j = i / 2; j >= 1; j--)
        {
            int x = j, y = i - j;
            dp[i] = max(x * y, dp[i]);
            dp[i] = max(dp[i], dp[x] * y);
            dp[i] = max(dp[i], dp[y] * x);
            dp[i] = max(dp[i], dp[x] * dp[y]);
        }
    }

    return dp[n];
}