#include <bits/stdc++.h>
using namespace std;

bool searchElement(vector<int> arr, int target)
{
    int low = 0, high = arr.size() - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == target)
            return true;
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return false;
}

bool searchMatrix(vector<vector<int> > &matrix, int target)
{
    for (int i = 0; i < matrix.size(); i++)
    {
        int start = 0, end = matrix[i].size() - 1;
        if (target >= matrix[i][start] && target <= matrix[i][end])
            return searchElement(matrix[i], target);
    }

    return false;
}