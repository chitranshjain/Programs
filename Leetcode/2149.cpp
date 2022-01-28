#include <bits/stdc++.h>
using namespace std;

vector<int> rearrangeArray(vector<int> &nums)
{
    vector<int> pos, neg;
    for (int i = 0; i < nums.size(); i++)
        if (nums[i] >= 0)
            pos.push_back(nums[i]);
        else
            neg.push_back(nums[i]);

    nums.resize(0);
    for (int i = 0; i < pos.size(); i++)
    {
        nums.push_back(pos[i]);
        nums.push_back(neg[i]);
    }

    return nums;
}