#include <bits/stdc++.h>
using namespace std;

vector<int> decompressRLElist(vector<int> &nums)
{
    vector<int> ans;
    for (int i = 0; i < nums.size(); i = i + 2)
    {
        int freq = nums[i], val = nums[i + 1];
        for (int j = 0; j < freq; j++)
        {
            ans.push_back(val);
        }
    }

    return ans;
}


int main()
{
    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    vector<int> res = decompressRLElist(nums);

    for (int i = 0; i < n; i++)
    {
        cout << res[i] << " ";
    }
    cout << endl;
}