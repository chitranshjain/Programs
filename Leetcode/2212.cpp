#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxScore;
    vector<int> ans;

    void helper(vector<int> &bob, int i, int score, int remainingArrows, vector<int> &alice)
    {
        if (i == -1 || remainingArrows <= 0)
        {
            if (score >= maxScore)
            {
                maxScore = score;
                ans = bob;
            }

            return;
        }

        helper(bob, i - 1, score, remainingArrows, alice);

        if (remainingArrows > alice[i])
        {
            bob[i] = alice[i] + 1;
            remainingArrows -= bob[i];
            score += i;
            helper(bob, i - 1, score, remainingArrows, alice);
            bob[i] = 0;
        }
    }

    vector<int> maximumBobPoints(int numArrows, vector<int> &aliceArrows)
    {
        vector<int> bobArrows(12, 0);
        maxScore = INT_MIN;
        helper(bobArrows, 11, 0, numArrows, aliceArrows);

        for (int a : ans)
            numArrows -= a;

        if (numArrows > 0)
            ans[0] += numArrows;

        return ans;
    }
};