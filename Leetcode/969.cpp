#include <bits/stdc++.h>
using namespace std;

vector<int> pancakeSort(vector<int> &arr)
{
    vector<int> ans;

    int n = arr.size();
    while (n > 0)
    {
        int i;
        bool flag = false;
        for (i = 0; i < n - 1; i++)
            if (arr[i] == n)
            {
                flag = true;
                break;
            }

        if (flag)
        {
            ans.push_back(i + 1);
            ans.push_back(n);
            reverse(arr.begin(), arr.begin() + i + 1);
            reverse(arr.begin(), arr.begin() + n);
        }

        n--;
    }

    return ans;
}