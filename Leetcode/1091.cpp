#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int shortestPathBinaryMatrix(vector<vector<int> > &grid)
    {

        if (grid[0][0] == 1)
            return -1;

        int n = grid.size();

        queue<vector<int> > q;
        q.push({0, 0, 1});

        vector<vector<int> > dirs = {{-1, -1}, {-1, 0}, {-1, 1}, {0, 1}, {1, 1}, {1, 0}, {1, -1}, {0, -1}};

        while (!q.empty())
        {
            int size = q.size();

            while (size--)
            {
                vector<int> curr = q.front();
                q.pop();

                int r = curr[0], c = curr[1], p = curr[2];

                if (r == n - 1 && c == n - 1)
                    return p;

                for (vector<int> d : dirs)
                {
                    int rn = r + d[0];
                    int cn = c + d[1];

                    if (rn >= 0 && cn >= 0 && rn < n && cn < n && grid[rn][cn] == 0)
                    {
                        q.push({rn, cn, p + 1});
                        grid[rn][cn] = 1;
                    }
                }
            }
        }

        return -1;
    }
};