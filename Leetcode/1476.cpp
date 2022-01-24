#include <bits/stdc++.h>
using namespace std;

class SubrectangleQueries
{
public:
    vector<vector<int> > rect;
    SubrectangleQueries(vector<vector<int> > &rectangle)
    {
        for (int i = 0; i < rectangle.size(); i++)
        {
            vector<int> v;
            for (int j = 0; j < rectangle[i].size(); j++)
                v.push_back(rectangle[i][j]);

            rect.push_back(v);
        }
    }

    void updateSubrectangle(int row1, int col1, int row2, int col2, int newValue)
    {
        for (int i = row1; i <= row2; i++)
            for (int j = col1; j <= col2; j++)
                rect[i][j] = newValue;
    }

    int getValue(int row, int col)
    {
        return rect[row][col];
    }
};

/**
 * Your SubrectangleQueries object will be instantiated and called as such:
 * SubrectangleQueries* obj = new SubrectangleQueries(rectangle);
 * obj->updateSubrectangle(row1,col1,row2,col2,newValue);
 * int param_2 = obj->getValue(row,col);
 */