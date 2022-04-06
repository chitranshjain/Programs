#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int trap(vector<int> &heights)
    {
        int n = heights.size();
        vector<int> maxBeg(n), maxEnd(n);

        maxBeg[0] = heights[0];
        maxEnd[n - 1] = heights[n - 1];

        for (int i = 1; i < n; i++)
            maxBeg[i] = max(maxBeg[i - 1], heights[i]);

        for (int i = n - 2; i >= 0; i--)
            maxEnd[i] = max(maxEnd[i + 1], heights[i]);

        int waterTrapped = 0;
        for (int i = 0; i < n; i++)
            waterTrapped += min(maxBeg[i], maxEnd[i]) - heights[i];

        return waterTrapped;
    }
};