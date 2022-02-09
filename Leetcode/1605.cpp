#include <bits/stdc++.h>
using namespace std;

vector<vector<int> > restoreMatrix(vector<int> &rowSum, vector<int> &colSum)
{
    vector<vector<int> > res;
    int n = rowSum.size(), m = colSum.size();
    for (int i = 0; i < n; i++)
    {
        vector<int> v;
        for (int j = 0; j < m; j++)
        {
            int x = min(rowSum[i], colSum[j]);
            rowSum[i] = rowSum[i] - x;
            colSum[j] = colSum[j] - x;
            v.push_back(x);
        }
        res.push_back(v);
    }

    return res;
}