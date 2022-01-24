#include <bits/stdc++.h>
using namespace std;

vector<int> countPoints(vector<vector<int> > &points, vector<vector<int> > &queries)
{
    vector<int> ans;
    for (int i = 0; i < queries.size(); i++)
    {
        int count = 0;
        int x1 = queries[i][0], y1 = queries[i][1], r = queries[i][2];
        for (int j = 0; j < points.size(); j++)
        {
            int x2 = points[j][0], y2 = points[j][1];
            int xD = pow((abs(x2 - x1)), 2);
            int yD = pow((abs(y2 - y1)), 2);
            int d = xD + yD;

            if (d <= r * r)
                count++;
        }

        ans.push_back(count);
    }

    return ans;
}