#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> getRow(int rowIndex)
    {
        vector<vector<int> > ans;

        for (int i = 0; i <= rowIndex; i++)
        {
            vector<int> v;
            int n = ans.size() - 1;
            for (int j = 0; j <= i; j++)
            {
                if (j == 0 || j == i)
                {
                    v.push_back(1);
                }
                else
                {
                    v.push_back(ans[n][j - 1] + ans[n][j]);
                }
            }

            ans.push_back(v);
        }

        return ans[rowIndex];
    }
};