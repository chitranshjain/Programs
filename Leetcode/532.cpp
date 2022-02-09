#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int findPairs(vector<int> &nums, int k)
{
    unordered_map<int, int> numbers;
    for (int i = 0; i < nums.size(); i++)
        numbers[nums[i]]++;

    int count = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (k > 0 && numbers[nums[i] - k] > 0)
        {
            numbers[nums[i] - k] = 0;
            count++;
        }
        else if (k == 0 && numbers[nums[i]] >= 2)
        {
            numbers[nums[i]] = 0;
            count++;
        }
    }
    
    return count;
}