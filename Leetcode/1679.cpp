#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxOperations(vector<int> &nums, int k)
    {
        sort(nums.begin(), nums.end());

        int count = 0;
        int beg = 0, end = nums.size() - 1;

        while (beg < end)
        {
            if (nums[beg] + nums[end] == k)
            {
                count++;
                beg++;
                end--;
            }
            else if (nums[beg] + nums[end] > k)
            {
                end--;
            }
            else
            {
                beg++;
            }
        }

        return count;
    }
};