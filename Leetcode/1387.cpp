#include <bits/stdc++.h>
using namespace std;

bool myComp(pair<int, int> a, pair<int, int> b)
{
    if (a.first == b.first)
        return a.second < b.second;
    else
        return a.first < b.first;
}

class Solution
{
public:
    int computePower(int n)
    {
        int steps = 0;

        while (n != 1)
        {
            if (n % 2 == 0)
                n /= 2;
            else
                n = n * 3 + 1;

            steps++;
        }

        return steps;
    }

    int getKth(int lo, int hi, int k)
    {
        if (lo == 1 && hi == 1)
            return 1;

        vector<pair<int, int> > dp(hi + 1);
        dp[1] = {0, 1};
        dp[2] = {1, 2};

        for (int i = 3; i <= hi; i++)
        {
            if (i % 2 == 0)
                dp[i] = {dp[i / 2].first + 1, i};
            else
            {
                dp[i] = {computePower(i), i};
            }
        }

        vector<pair<int, int> > p;

        for (int i = lo; i <= hi; i++)
            p.push_back(dp[i]);

        sort(p.begin(), p.end());

        return p[k - 1].second;
    }
};