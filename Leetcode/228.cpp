#include <bits/stdc++.h>
using namespace std;

vector<string> summaryRanges(vector<int> &nums)
{
    vector<string> ranges;

    if (nums.size() == 0)
        return ranges;

    long long int curr = nums[0], start = nums[0], end = nums[0];
    for (long long int i = 0; i < nums.size(); i++, curr++, end++)
    {
        if (nums[i] != curr)
        {
            string res = "";
            if (start != end - 1)
                res = to_string(start) + "->" + to_string(end - 1);
            else
                res = to_string(start);

            start = nums[i];
            end = nums[i];
            curr = nums[i];
            ranges.push_back(res);
        }
    }

    string res = "";
    if (start != end - 1)
        res = to_string(start) + "->" + to_string(end - 1);
    else
        res = to_string(start);

    ranges.push_back(res);

    return ranges;
}