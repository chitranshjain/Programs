#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    int low = 0, high = nums.size() - 1;
    vector<int> ans;
    unordered_map<int, int> num;

    for (int i = 0; i < nums.size(); i++)
        num[nums[i]] = i;

    for (int i = 0; i < nums.size(); i++)
    {
        if (num.find(target - nums[i]) != num.end() && num[target - nums[i]] != i)
        {
            ans.push_back(i);
            ans.push_back(num[target - nums[i]]);
            break;
        }
    }

    return ans;
}