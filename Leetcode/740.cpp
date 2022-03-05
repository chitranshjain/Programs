#include <bits/stdc++.h>
using namespace std;

int calculatePoints(vector<int> &nums, int pos, vector<int> &dp)
{
    if (pos >= nums.size())
        return 0;

    if (dp[pos] != -1)
        return dp[pos];

    int currElement = nums[pos], sum = nums[pos], idx = pos + 1;
    while (idx < nums.size() && nums[idx] == currElement)
    {
        sum = sum + nums[idx];
        idx++;
    }

    while (idx < nums.size() && nums[idx] == currElement + 1)
        idx++;

    dp[pos] = max(sum + calculatePoints(nums, idx, dp), calculatePoints(nums, pos + 1, dp));
    return dp[pos];
}

int deleteAndEarn(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    vector<int> dp(nums.size() + 1, -1);
    return calculatePoints(nums, 0, dp);
}