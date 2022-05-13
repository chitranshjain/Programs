#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

bool checkSubarraySum(vector<int> &nums, int k)
{
    int n = nums.size();

    unordered_map<int, int> s = {{0, -1}};
    int prefixSum = 0, remainder;

    for (int i = 0; i < n; i++)
    {
        prefixSum += nums[i];
        remainder = prefixSum % k;

        if (s.count(remainder) != 0)
        {
            if (i - s[remainder] > 1)
                return true;
        }
        else
        {
            if (remainder == 0)
                continue;
            else
                s[remainder] = i;
        }
    }

    return false;
}