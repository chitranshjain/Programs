#include <bits/stdc++.h>
using namespace std;

bool search(vector<int> &arr, int target)
{
    int low = 0, high = arr.size() - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == target)
            return true;

        if (arr[low] == arr[mid] && arr[mid] == arr[high])
        {
            low++;
            high--;
        }
        else if (arr[low] <= arr[mid])
        {
            if (arr[low] <= target && target < arr[mid])
                high = mid - 1;
            else
                low = mid + 1;
        }
        else
        {
            if (arr[mid] < target && arr[high] >= target)
                low = mid + 1;
            else
                high = mid - 1;
        }
    }

    return false;
}