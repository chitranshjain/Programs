#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isFeasible(vector<int> &arr, int sum, int k)
    {
        int curr = 0;
        int d = 1;

        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] > sum)
                return false;

            if (curr + arr[i] > sum)
            {
                curr = arr[i];
                d++;
            }
            else
            {
                curr += arr[i];
            }
        }

        return d <= k;
    }

    int shipWithinDays(vector<int> &weights, int days)
    {
        int sum = 0;
        for (auto n : weights)
            sum += n;

        int low = 0, high = sum;
        int ans = INT_MAX;

        while (low <= high)
        {
            int mid = (low + high) / 2;

            if (isFeasible(weights, mid, days))
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