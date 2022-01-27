#include <bits/stdc++.h>
using namespace std;

int maxWidthOfVerticalArea(vector<vector<int> > &points)
{
    sort(points.begin(), points.end());
    int res = INT_MIN, curr;
    for (int i = 0; i < points.size() - 1; i++)
    {
        curr = abs(points[i + 1][0] - points[i][0]);
        res = max(res, curr);
    }

    return res;
}