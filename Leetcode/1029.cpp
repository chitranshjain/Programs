#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int twoCitySchedCost(vector<vector<int> > &costs)
    {
        int cost = 0;
        int size = costs.size();

        vector<int> refund(size, 0);

        for (int i = 0; i < size; i++)
        {
            cost += costs[i][0];
            refund[i] = costs[i][1] - costs[i][0];
        }

        sort(refund.begin(), refund.end());
        for (int i = 0; i < size / 2; i++)
            cost += refund[i];

        return cost;
    }
};