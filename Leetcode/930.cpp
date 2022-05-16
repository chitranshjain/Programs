#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    int numSubarraysWithSum(vector<int> &nums, int goal)
    {
        int n = nums.size(), ans = 0, preSum = 0;
        unordered_map<int, int> m;

        m[preSum] = 1;

        vector<int> prefixSum(n);

        for (int i = 0; i < n; i++)
        {
            preSum += nums[i];
            prefixSum[i] = preSum;

            if (m.find(preSum - goal) != m.end())
                ans += m[preSum - goal];

            m[preSum]++;
        }

        return ans;
    }
};