#include <bits/stdc++.h>
using namespace std;

bool myCompare(pair<int, int> a, pair<int, int> b)
{
    if (a.second < b.second)
        return true;
    else if (a.second > b.second)
        return false;
    else if (a.second == b.second && a.first < b.first)
        return true;
    else
        return false;
}

class Solution
{
public:
    vector<int> kWeakestRows(vector<vector<int> > &mat, int k)
    {
        vector<pair<int, int> > soldiers;

        for (int i = 0; i < mat.size(); i++)
        {
            int totalSoldiers = 0;
            for (int j = 0; j < mat[i].size(); j++)
                if (mat[i][j] == 1)
                    totalSoldiers++;

            soldiers.push_back(make_pair(i, totalSoldiers));
        }

        sort(soldiers.begin(), soldiers.end(), myCompare);
        vector<int> ans;
        for (int i = 0; i < k; i++)
            ans.push_back(soldiers[i].first);

        return ans;
    }
};