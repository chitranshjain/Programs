#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int numOfPairs(vector<string> &nums, string target)
{
    unordered_map<string, int> freq;
    for (int i = 0; i < nums.size(); i++)
        freq[nums[i]]++;

    int count = 0;
    for (int i = 1; i < target.length(); i++)
    {
        string left = target.substr(0, i);
        string right = target.substr(i, target.length() - i);

        if (left == right)
            count = count + (freq[left] * (freq[left] - 1));
        else
            count = count + freq[left] * freq[right];
    }

    return count;
}