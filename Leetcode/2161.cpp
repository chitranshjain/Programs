#include <bits/stdc++.h>
using namespace std;

vector<int> pivotArray(vector<int> &nums, int pivot)
{
    vector<int> lower, greater, pivots;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] < pivot)
            lower.push_back(nums[i]);
        else if (nums[i] > pivot)
            greater.push_back(nums[i]);
        else
            pivots.push_back(nums[i]);
    }

    int index = 0;
    for (int i = 0; i < lower.size(); i++)
        nums[index++] = lower[i];
    for (int i = 0; i < pivots.size(); i++)
        nums[index++] = pivots[i];
    for (int i = 0; i < greater.size(); i++)
        nums[index++] = greater[i];

    return nums;
}

vector<int> pivotArray2(vector<int> &nums, int pivot)
{
    int lower = 0, pivots = 0;
    for (auto n : nums)
    {
        if (n < pivot)
            lower++;
        else if (n == pivot)
            pivots++;
    }

    int greater = lower + pivots;
    pivots = lower;
    lower = 0;

    vector<int> res(nums.size());

    for (int i = 0; i < nums.size(); i++)
    {
        int n = nums[i];
        if (n < pivot)
            res[lower++] = n;
        else if (n > pivot)
            res[greater++] = n;
        else
            res[pivots++] = n;
    }

    return res;
}