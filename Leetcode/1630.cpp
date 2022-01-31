#include <bits/stdc++.h>
using namespace std;

vector<bool> checkArithmeticSubarrays(vector<int> &nums, vector<int> &l, vector<int> &r)
{
    vector<bool> res;
    for (int i = 0; i < l.size(); i++)
    {
        int low = l[i], high = r[i];
        vector<int> arr;
        for (int j = low; j <= high; j++)
            arr.push_back(nums[j]);

        sort(arr.begin(), arr.end());

        int d = arr[arr.size() - 1] - arr[arr.size() - 2];
        bool ans = true;
        for (int j = arr.size() - 2; j >= 1; j--)
            if (arr[j] - arr[j - 1] != d)
                ans = false;

        res.push_back(ans);
    }

    return res;
}