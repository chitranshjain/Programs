#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    bool divideArray(vector<int> &nums)
    {
        unordered_map<int, int> m;

        for (auto n : nums)
            m[n]++;

        for (auto x : m)
            if (x.second % 2 != 0)
                return false;

        return true;
    }
};