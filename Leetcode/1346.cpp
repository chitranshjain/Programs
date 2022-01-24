#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

bool checkIfExist(vector<int> &arr)
{
    unordered_set<int> nums;
    int c0 = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        nums.insert(arr[i]);
        if (arr[i] == 0)
            c0++;

        if (c0 >= 2)
            return true;
    }

    unordered_set<int>::iterator it;
    for (it = nums.begin(); it != nums.end(); it++)
        if ((*it) != 0 && nums.find(2 * (*it)) != nums.end())
            return true;

    return false;
}