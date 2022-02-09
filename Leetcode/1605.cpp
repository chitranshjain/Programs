#include <bits/stdc++.h>
using namespace std;

// O(n*m)
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

// O(n+m)
vector<vector<int> > restoreMatrix(vector<int> &rowSum, vector<int> &colSum)
{
    int n = rowSum.size(), m = colSum.size();
    vector<vector<int> > res(n, vector<int>(m, 0));
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        int x = min(rowSum[i], colSum[j]);
        res[i][j] = x;
        rowSum[i] = rowSum[i] - x;
        colSum[j] = colSum[j] - x;

        if (rowSum[i] == 0)
            i++;
        else
            j++;
    }

    return res;
}