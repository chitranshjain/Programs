#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &prices)
{
    int buyPrice = INT_MAX;
    int profit = INT_MIN;

    for (int i = 0; i < prices.size(); i++)
    {
        if (buyPrice > prices[i])
            buyPrice = prices[i];

        int currentProfit = prices[i] - buyPrice;

        profit = max(profit, currentProfit);
    }

    return profit;
}