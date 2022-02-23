#include <bits/stdc++.h>
using namespace std;

vector<vector<int> > intervalIntersection(vector<vector<int> > &firstList, vector<vector<int> > &secondList)
{
    vector<vector<int> > ans;
    int i = 0, j = 0;
    while (i < firstList.size() && j < secondList.size())
    {
        int startA = firstList[i][0], endA = firstList[i][1];
        int startB = secondList[j][0], endB = secondList[j][1];

        if (startA <= endB && startB <= endA)
        {
            vector<int> v(2, 0);

            v[0] = max(startA, startB);
            v[1] = min(endA, endB);

            ans.push_back(v);
        }

        if (endB < startA || endB < endA)
            j++;
        else if (endA < startB || endA < endB)
            i++;
        else
        {
            i++;
            j++;
        }
    }

    return ans;
}