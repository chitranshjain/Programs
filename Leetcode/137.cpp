#include <bits/stdc++.h>
using namespace std;

int singleNumber(vector<int> &nums)
{
    int ans = 0;
    for (int i = 0; i < 32; i++)
    {
        int bitSum = 0;
        for (int n : nums)
            bitSum += (n >> i & 1);

        if (bitSum % 3 != 0)
            ans |= 1 << i;
    }

    return ans;
}