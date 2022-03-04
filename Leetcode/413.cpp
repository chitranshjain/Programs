#include <bits/stdc++.h>
using namespace std;

int numberOfArithmeticSlices(vector<int> &nums)
{
    int res = 0;

    if (nums.size() < 3)
        return res;

    int currDiff = nums[1] - nums[0], currCount = 2;
    for (int i = 2; i < nums.size(); i++)
    {
        if (nums[i] - nums[i - 1] == currDiff)
            currCount++;
        else
        {
            currDiff = nums[i] - nums[i - 1];
            currCount = 2;
        }

        if (currCount < 3)
            continue;
        else if (currCount == 3)
            res++;
        else
            res = res + currCount - 2;
    }

    return res;
}