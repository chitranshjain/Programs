#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int longest = 0, curr = 0;
    for (int i = 0; i < n ; i++)
    {
        if (arr[i] == 1)
            curr++;
        else
        {
            longest = max(longest, curr);
            curr = 0;
        }
    }

    int low = 0, high = n - 1;
    curr = 0;
    while (low <= high)
    {
        int prev_low = low, prev_high = high;
        if (arr[low] == 1)
        {
            low++;
            curr++;
        }

        if (arr[high] == 1)
        {
            high--;
            curr++;
        }

        longest = max(longest, curr);
        if (prev_low == low && prev_high == high)
            break;
    }

    cout << longest;
}