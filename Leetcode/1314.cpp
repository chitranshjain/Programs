#include <bits/stdc++.h>
using namespace std;

vector<vector<int> > matrixBlockSum(vector<vector<int> > &mat, int k)
{
    vector<vector<int> > ans;
    for (int i = 0; i < mat.size(); i++)
        for (int j = 1; j < mat[i].size(); j++)
            mat[i][j] = mat[i][j] + mat[i][j - 1];

    for (int i = 0; i < mat.size(); i++)
    {
        vector<int> v;
        int rMin = i - k < 0 ? 0 : i - k;
        int rMax = i + k >= mat.size() ? mat.size() - 1 : i + k;

        for (int j = 0; j < mat[i].size(); j++)
        {
            int cMin = j - k < 0 ? 0 : j - k;
            int cMax = j + k >= mat[i].size() ? mat[i].size() - 1 : j + k;

            int sum = 0;
            for (int it = rMin; it <= rMax; it++)
            {
                sum = sum + mat[it][cMax];
                if (cMin > 0)
                    sum = sum - mat[it][cMin - 1];
            }

            v.push_back(sum);
        }
        ans.push_back(v);
    }

    return ans;
}