#include <bits/stdc++.h>
using namespace std;

vector<int> getMaximumXor(vector<int> &nums, int maximumBit)
{
    int curr = 0;
    vector<int> ans;
    int k = pow(2, maximumBit) - 1;
    for (int i = 0; i < nums.size(); i++)
    {
        curr = curr ^ nums[i];
        ans.push_back(k ^ curr);
    }

    reverse(ans.begin(), ans.end());
    return ans;
}