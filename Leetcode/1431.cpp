#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
    {
        int maxCandies = *max_element(candies.begin(), candies.end());

        vector<bool> greatest;

        for (int i = 0; i < candies.size(); i++)
        {
            if (candies[i] + extraCandies >= maxCandies)
            {
                greatest.push_back(true);
            }
            else
            {
                greatest.push_back(false);
            }
        }

        return greatest;
    }
};