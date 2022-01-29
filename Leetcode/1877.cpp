#include <bits/stdc++.h>
using namespace std;

int minPairSum(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    int low = 0, high = nums.size() - 1;
    int ans = INT_MIN;
    while (low <= high)
    {
        ans = max(nums[low] + nums[high], ans);
        low++;
        high--;
    }

    return ans;
}