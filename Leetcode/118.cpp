#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int> > generate(int numRows)
    {
        vector<vector<int> > ans;
        for (int i = 1; i <= numRows; i++)
        {
            int n = ans.size() - 1;
            vector<int> v;
            for (int j = 1; j <= i; j++)
            {
                if (j == 1 || j == i)
                {
                    v.push_back(1);
                }
                else
                {
                    v.push_back(ans[n][j - 2] + ans[n][j - 1]);
                }
            }
            ans.push_back(v);
        }

        return ans;
    }
};