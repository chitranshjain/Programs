#include <bits/stdc++.h>
using namespace std;

int numTeams(vector<int> &rating)
{
    int ans = 0, n = rating.size();
    int i, j;
    for (i = 1; i < n; i++)
    {
        int leftSmaller = 0, leftGreater = 0;
        int rightSmaller = 0, rightGreater = 0;

        for (j = 0; j < i; j++)
        {
            if (rating[j] < rating[i])
                leftSmaller++;
            else
                leftGreater++;
        }

        for (j = i + 1; j < n; j++)
        {
            if (rating[j] < rating[i])
                rightSmaller++;
            else
                rightGreater++;
        }

        ans = ans + (leftSmaller * rightGreater) + (rightSmaller * leftGreater);
    }

    return ans;
}