#include <bits/stdc++.h>
using namespace std;

// Recursive Solution
class Solution
{
public:
    int winner(vector<int> &nums, int beg, int end)
    {
        int n = nums.size();
        if (beg > end)
            return 0;

        int points = 0;
        points += max(nums[beg] + min(winner(nums, beg + 2, end), winner(nums, beg + 1, end - 1)), nums[end] + min(winner(nums, beg + 1, end - 1), winner(nums, beg, end - 2)));

        return points;
    }

    bool PredictTheWinner(vector<int> &nums)
    {
        int points = winner(nums, 0, nums.size() - 1);

        int sum = 0;
        for (int i = 0; i < nums.size(); i++)
            sum += nums[i];

        return points >= (sum - points);
    }
};