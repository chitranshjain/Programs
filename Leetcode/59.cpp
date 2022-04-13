#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int> > generateMatrix(int n)
    {
        vector<vector<int> > grid(n, vector<int>(n));
        int num = 1;
        int top = 0, left = 0, right = n - 1, bottom = n - 1;
        while (top <= bottom && left <= right)
        {
            for (int i = left; i <= right; i++)
                grid[top][i] = num++;

            top++;

            for (int i = top; i <= bottom; i++)
                grid[i][right] = num++;

            right--;

            if (top <= bottom)
            {
                for (int i = right; i >= left; i--)
                    grid[bottom][i] = num++;

                bottom--;
            }

            if (left <= right)
            {
                for (int i = bottom; i >= top; i--)
                    grid[i][left] = num++;

                left++;
            }
        }

        return grid;
    }
};