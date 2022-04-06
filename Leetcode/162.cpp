#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findPeakElement(vector<int> &nums)
    {
        for (int i = 0; i < nums.size(); i++)
            if ((i == 0 || nums[i] > nums[i - 1]) && (i == nums.size() - 1 || nums[i] > nums[i + 1]))
                return i;

        return -1;
    }
};

// Binary Search Implementation

class Solution
{
public:
    int findPeakElement(vector<int> &arr)
    {
        int low = 0, high = arr.size() - 1;

        while (low <= high)
        {
            int mid = (low + high) / 2;

            if ((mid == 0 || arr[mid] > arr[mid - 1]) && (mid == arr.size() - 1 || arr[mid] > arr[mid + 1]))
            {
                return mid;
            }
            else if (mid != 0 && arr[mid] < arr[mid - 1])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }

        return -1;
    }
};