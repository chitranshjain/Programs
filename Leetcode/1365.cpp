#include <bits/stdc++.h>
using namespace std;

int indexOfFirstOccurrence(vector<int> nums, int target)
{
    int l = 0, r = nums.size() - 1;
    int index = -1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (nums[mid] == target)
        {
            if ((mid - 1) >= 0 && nums[mid - 1] == target)
            {
                r = mid - 1;
            }
            else
            {
                index = mid;
                break;
            }
        }
        else if (nums[mid] < target)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }

    return index;
}

vector<int> smallerNumbersThanCurrent(vector<int> &nums)
{
    vector<int> nums2;
    vector<int> ans;
    for (int i = 0; i < nums.size(); i++)
    {
        nums2.push_back(nums[i]);
    }

    sort(nums2.begin(), nums2.end());

    for (int i = 0; i < nums.size(); i++)
    {
        int target = nums[i];
        int index = indexOfFirstOccurrence(nums2, target);
        ans.push_back(index);
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

    vector<int> res = smallerNumbersThanCurrent(nums);

    for (int i = 0; i < n; i++)
    {
        cout << res[i] << " ";
    }
    cout << endl;
}