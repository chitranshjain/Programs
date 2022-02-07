#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &nums)
{
    int prev = nums[0];
    bool prevOccurred = false;
    int length = 1;
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] == prev)
        {
            if (!prevOccurred)
            {
                prevOccurred = true;
                swap(nums[i], nums[length]);
                length++;
            }
            else
            {
                continue;
            }
        }
        else
        {
            swap(nums[i], nums[length]);
            prev = nums[length];
            length++;
            prevOccurred = false;
        }
    }

    return length;
}