#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minFallingPathSum(vector<vector<int> > &matrix)
    {
        int ans = INT_MAX, n = matrix.size();
        vector<int> prev(n, 0);

        for (int i = 0; i < n; i++)
            prev[i] = matrix[0][i];

        for (int i = 1; i < n; i++)
        {
            vector<int> curr(n, 0);
            for (int j = 0; j < n; j++)
            {
                int leftDiag = INT_MAX, upper = INT_MAX, rightDiag = INT_MAX;

                if (j != 0)
                    leftDiag = prev[j - 1];

                upper = prev[j];

                if (j != n - 1)
                    rightDiag = prev[j + 1];

                curr[j] = matrix[i][j] + min(min(leftDiag, rightDiag), upper);
            }

            prev = curr;
        }

        return *min_element(prev.begin(), prev.end());
    }
};