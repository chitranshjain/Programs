#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n = nums.size();
        
        int maxElement = *max_element(nums.begin(), nums.end());
        maxElement++;
        
        for(int i=0;i<n;i++)
        {
            int newValue = nums[nums[i]%maxElement]%maxElement;
            nums[i] = newValue * maxElement + nums[i];
        }
        
        
        for(int i=0;i<n;i++)
        {
            nums[i] = nums[i] / maxElement;
        }
        
        return nums;
    }
};