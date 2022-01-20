#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> runningSum;
        int n = nums.size();
        
        runningSum.push_back(nums[0]);
        for(int i=1;i<n;i++)
        {
            runningSum.push_back(nums[i] + runningSum[i-1]);
        }
        
        return runningSum;
    }
};