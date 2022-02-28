#include <bits/stdc++.h>
using namespace std;

int searchInsert(vector<int> &arr, int target)
{
    int low = 0, high = arr.size() - 1, mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }

    if (arr[mid] < target)
        return mid + 1;
    else
        return mid;
}