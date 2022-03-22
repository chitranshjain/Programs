
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        unordered_map<int, int> freq;
        int ans;
        for (auto num : nums)
        {
            freq[num]++;
            if (freq[num] > 1)
                ans = num;
        }

        return ans;
    }
};