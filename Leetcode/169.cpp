#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> &nums)
{
    int res = nums[0], count = 1;
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] == res)
            count++;
        else
            count--;

        if (count == 0)
        {
            res = nums[i];
            count = 1;
        }
    }

    count = 0;
    for (int i = 0; i < nums.size(); i++)
        if (nums[i] == res)
            count++;

    if (count >= (nums.size() / 2))
        return res;
    else
        return -1;
}