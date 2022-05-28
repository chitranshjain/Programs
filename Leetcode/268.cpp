#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int XOR = 0, n = nums.size();

        for (int i = 0; i <= n; i++)
            XOR ^= i;

        for (auto x : nums)
            XOR ^= x;

        return XOR;
    }
};