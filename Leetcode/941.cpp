#include <bits/stdc++.h>
using namespace std;

bool validMountainArray(vector<int> &arr)
{
    if (arr.size() < 3)
        return false;

    bool increasing = true, valid = true;
    int i = 0;

    if (arr[0] > arr[1])
        return false;

    while (i < arr.size() - 1)
    {
        if (arr[i] == arr[i + 1])
        {
            valid = false;
            break;
        }

        if (increasing)
        {
            if (arr[i] < arr[i + 1])
            {
                i++;
                continue;
            }
            else
                increasing = false;
        }
        else
        {
            if (arr[i] > arr[i + 1])
            {
                i++;
                continue;
            }
            else
            {
                valid = false;
                break;
            }
        }

        i++;
    }

    if (increasing)
        return false;
    else
        return valid;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        cout << validMountainArray(arr) << endl;
    }
}