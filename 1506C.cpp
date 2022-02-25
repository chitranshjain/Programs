#include <bits/stdc++.h>
using namespace std;

int longestCommonSubstring(string a, string b)
{
    vector<vector<int> > dp(a.length() + 1, vector<int>(b.length() + 1));

    for (int i = 0; i < a.length() + 1; i++)
        dp[i][0] = 0;

    for (int i = 0; i < b.length() + 1; i++)
        dp[0][i] = 0;

    int res = 0;
    for (int i = 1; i < a.length() + 1; i++)
    {
        for (int j = 1; j < b.length() + 1; j++)
        {
            if (a[i - 1] == b[j - 1])
                dp[i][j] = 1 + dp[i - 1][j - 1];
            else
                dp[i][j] = 0;

            res = max(res, dp[i][j]);
        }
    }

    return res;
}

void solve()
{
    string a, b;
    cin >> a >> b;

    int len = longestCommonSubstring(a, b);

    int res = a.length() + b.length() - len - len;

    cout << res << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}