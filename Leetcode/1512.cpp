#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>
using namespace std;

int numIdenticalPairs(vector<int> &nums)
{
    unordered_map<int, int> frequencies;
    unordered_set<int> num;

    for (int i = 0; i < nums.size(); i++)
    {
        frequencies[nums[i]] = 0;
        num.insert(nums[i]);
    }

    for (int i = 0; i < nums.size(); i++)
    {
        frequencies[nums[i]]++;
    }

    unordered_set<int>::iterator itr;
    int result = 0;
    for (itr = num.begin(); itr != num.end(); itr++)
    {
        int n = frequencies[(*itr)];
        if (n > 1)
        {
            result = result + ((n*(n-1))/2);
        }
    }

    return result;
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

    cout << numIdenticalPairs(nums);
}