#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int> > shiftGrid(vector<vector<int> > &grid, int k)
    {
        vector<int> gridElements;

        for (int i = 0; i < grid.size(); i++)
            for (int j = 0; j < grid[i].size(); j++)
                gridElements.push_back(grid[i][j]);

        k = k % gridElements.size();

        vector<int> finalElements;

        for (int i = gridElements.size() - k; i < gridElements.size(); i++)
            finalElements.push_back(gridElements[i]);

        for (int i = 0; i < gridElements.size() - k; i++)
            finalElements.push_back(gridElements[i]);

        int index = 0;
        for (int i = 0; i < grid.size(); i++)
            for (int j = 0; j < grid[i].size(); j++)
                grid[i][j] = finalElements[index++];

        return grid;
    }
};