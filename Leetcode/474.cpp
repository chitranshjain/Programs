#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int generate(int i, int m, int n, vector<vector<vector<int> > > &dp, vector<pair<int, int> > &freq)
    {
        if (i < 0)
            return 0;

        if (dp[i][m][n] != -1)
            return dp[i][m][n];

        if (m >= freq[i].first && n >= freq[i].second)
        {
            return dp[i][m][n] = max(1 + generate(i - 1, m - freq[i].first, n - freq[i].second, dp, freq), generate(i - 1, m, n, dp, freq));
        }
        else
        {
            return dp[i][m][n] = generate(i - 1, m, n, dp, freq);
        }
    }

    int findMaxForm(vector<string> &strs, int m, int n)
    {
        vector<pair<int, int> > freq;
        for (auto s : strs)
        {
            int c = count(s.begin(), s.end(), '0');
            freq.push_back({c, s.length() - c});
        }

        int sz = strs.size();

        vector<vector<vector<int> > > dp(sz + 1, vector<vector<int> >(m + 1, vector<int>(n + 1, -1)));

        return generate(sz - 1, m, n, dp, freq);
    }
};