#include <bits/stdc++.h>
using namespace std;

int matrixScore(vector<vector<int> > &grid)
{
    for (int i = 0; i < grid.size(); i++)
    {
        if (grid[i][0] == 0)
        {
            for (int j = 0; j < grid[i].size(); j++)
            {
                if (grid[i][j] == 0)
                    grid[i][j] = 1;
                else
                    grid[i][j] = 0;
            }
        }
    }

    for (int i = 0; i < grid[0].size(); i++)
    {
        int countZero = 0, countOnes = 0;
        for (int j = 0; j < grid.size(); j++)
        {
            if (grid[j][i] == 0)
                countZero++;
            else
                countOnes++;
        }

        if (countOnes >= countZero)
            continue;
        else
        {
            for (int j = 0; j < grid.size(); j++)
            {
                if (grid[j][i] == 0)
                    grid[j][i] = 1;
                else
                    grid[j][i] = 0;
            }
        }
    }

    int ans = 0;
    for (int i = 0; i < grid.size(); i++)
    {
        int num = 0;
        int power = grid[i].size() - 1;
        for (int j = 0; j < grid[i].size(); j++, power--)
        {
            if (grid[i][j] == 1)
                num = num + pow(2, power);
        }
        ans = ans + num;
    }

    return ans;
}