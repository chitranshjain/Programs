#include <bits/stdc++.h>
using namespace std;

// O(nlogn)
class Solution
{
public:
    int maxProduct(vector<int> &nums)
    {
        int n = nums.size();
        sort(nums.begin(), nums.end());

        return (nums[n - 1] - 1) * (nums[n - 2] - 1);
    }
};

// O(n)
class Solution
{
public:
    int maxProduct(vector<int> &nums)
    {
        int n = nums.size();
        int largest = nums[0] > nums[1] ? nums[0] : nums[1];
        int secondLargest = nums[1] < nums[0] ? nums[1] : nums[0];

        for (int i = 2; i < n; i++)
        {
            if (nums[i] >= largest)
            {
                secondLargest = largest;
                largest = nums[i];
            }
            else if (nums[i] > secondLargest)
            {
                secondLargest = nums[i];
            }
        }

        largest--;
        secondLargest--;

        return largest * secondLargest;
    }
};