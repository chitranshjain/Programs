#include <bits/stdc++.h>
using namespace std;

int findMin(vector<int> &arr)
{
    int low = 0, high = arr.size() - 1;
    int minimum = INT_MAX;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        minimum = min(minimum, arr[mid]);
        if (arr[low] <= arr[mid])
        {
            if (arr[low] > arr[mid] || arr[low] > arr[high])
                low = mid + 1;
            else
                high = mid - 1;
        }
        else
        {
            if (arr[high] < arr[mid])
                low = mid + 1;
            else
                high = mid - 1;
        }
    }

    return minimum;
}