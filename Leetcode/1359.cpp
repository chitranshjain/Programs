#include <bits/stdc++.h>
using namespace std;

int countOrders(int n)
{
    int MOD = 1e9 + 7;
    long long int dp[n + 1];
    dp[0] = 0;

    dp[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        int gaps = 2 * (i - 1) + 1;
        int possibilities = (gaps * (gaps + 1)) / 2;
        dp[i] = (possibilities * dp[i - 1]) % MOD;
    }

    return (int)dp[n];
}