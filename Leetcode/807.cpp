#include <bits/stdc++.h>
using namespace std;

int maxIncreaseKeepingSkyline(vector<vector<int> > &grid)
{
    vector<int> rowMax, colMax;
    for (int i = 0; i < grid.size(); i++)
    {
        int m = INT_MIN;
        for (int j = 0; j < grid[i].size(); j++)
            m = max(m, grid[i][j]);

        rowMax.push_back(m);
    }

    for (int i = 0; i < grid[0].size(); i++)
    {
        int m = INT_MIN;
        for (int j = 0; j < grid.size(); j++)
            m = max(m, grid[j][i]);

        colMax.push_back(m);
    }

    int r = grid.size(), c = grid[0].size();

    int ans = 0;
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            ans = ans + min(colMax[j], rowMax[i]) - grid[i][j];

    return ans;
}