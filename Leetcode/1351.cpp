#include <bits/stdc++.h>
using namespace std;

int countNegatives(vector<vector<int> > &grid)
{
    int row = 0, col = grid[0].size() - 1;
    int ans = 0;

    while (row < grid.size() && col >= 0)
    {
        if (grid[row][col] < 0)
            col--;
        else
        {
            row++;
            ans += grid[0].size() - col - 1;
        }

        if (col < 0)
        {
            ans += (grid.size() - row) * (grid[0].size());
            break;
        }
    }

    return ans;
}