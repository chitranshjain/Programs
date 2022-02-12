#include <bits/stdc++.h>
using namespace std;

int countGoodRectangles(vector<vector<int> > &rectangles)
{
    int maxLen = INT_MIN, count = 0;
    for (int i = 0; i < rectangles.size(); i++)
    {
        int newLen = min(rectangles[i][0], rectangles[i][1]);
        if (newLen == maxLen)
            count++;
        else if (newLen > maxLen)
        {
            count = 1;
            maxLen = newLen;
        }
    }

    return count;
}