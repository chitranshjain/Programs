#include <bits/stdc++.h>
using namespace std;

int firstOccurrence(vector<int> &nums, int target)
{
    int low = 0, high = nums.size() - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (nums[mid] == target)
        {
            if (mid == 0 || nums[mid - 1] != target)
                return mid;
            else
                high = mid - 1;
        }
        else if (nums[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}

int lastOccurrence(vector<int> &nums, int target)
{
    int low = 0, high = nums.size() - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (nums[mid] == target)
        {
            if (mid == nums.size() - 1 || nums[mid + 1] != target)
                return mid;
            else
                low = mid + 1;
        }
        else if (nums[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}

vector<int> searchRange(vector<int> &nums, int target)
{
    vector<int> ans;
    ans.push_back(firstOccurrence(nums, target));
    ans.push_back(lastOccurrence(nums, target));

    return ans;
}