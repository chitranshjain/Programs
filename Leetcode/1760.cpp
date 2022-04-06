#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPossible(vector<int> &nums, int mid, int maxOps)
    {
        int currOps = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            currOps += nums[i] / mid;

            if (nums[i] % mid == 0)
                currOps--;
        }

        return currOps <= maxOps;
    }

    int minimumSize(vector<int> &nums, int maxOperations)
    {
        int low = 0, high = *max_element(nums.begin(), nums.end());
        int ans = high;

        while (low <= high)
        {
            int mid = (low + high) / 2;

            if (mid == 0)
                break;

            if (isPossible(nums, mid, maxOperations))
            {
                ans = mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }

        return ans;
    }
};