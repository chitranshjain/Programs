#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxSatisfied(vector<int> &customers, vector<int> &grumpy, int minutes)
    {
        int ans = 0;
        for (int i = 0; i < customers.size(); i++)
            if (!grumpy[i])
                ans += customers[i];

        int curr = 0, res = 0;
        for (int i = 0; i < grumpy.size() - minutes + 1; i++)
        {
            curr = 0;
            for (int j = 0; j < minutes; j++)
                if (grumpy[j + i])
                    curr += customers[j + i];

            res = max(res, curr);
        }

        return ans + res;
    }
};