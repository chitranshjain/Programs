#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void sortFunction(vector<vector<int> > &mat, int row, int col, int rows, int cols)
    {
        int r = row, c = col;
        vector<int> vec;
        while (r < rows && c < cols)
        {
            vec.push_back(mat[r][c]);
            r++;
            c++;
        }

        sort(vec.begin(), vec.end());

        int index = 0;
        r = row, c = col;
        while (r < rows && c < cols)
        {
            mat[r][c] = vec[index];
            r++;
            c++;
            index++;
        }
    }

    vector<vector<int> > diagonalSort(vector<vector<int> > &mat)
    {
        int rows = mat.size(), cols = mat[0].size();

        for (int i = 0; i < cols; i++)
            sortFunction(mat, 0, i, rows, cols);

        for (int i = 1; i < rows; i++)
            sortFunction(mat, i, 0, rows, cols);

        return mat;
    }
};