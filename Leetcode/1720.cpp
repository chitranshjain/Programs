#include <bits/stdc++.h>
using namespace std;

vector<int> decode(vector<int> &encoded, int first)
{
    vector<int> ans;
    ans.push_back(first);

    for (int i = 0; i < encoded.size(); i++)
    {
        ans.push_back(ans[i] ^ encoded[i]);
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

    int first;
    cin >> first;

    vector<int> res = decode(nums, first);

    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
    cout << endl;
}