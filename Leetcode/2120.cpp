#include <bits/stdc++.h>
using namespace std;

vector<int> executeInstructions(int n, vector<int> &startPos, string s)
{
    vector<int> ans;
    for (int i = 0; i < s.length(); i++)
    {
        int count = 0, row = startPos[0], col = startPos[1];
        for (int j = i; j < s.length(); j++)
        {
            if (s[j] == 'R' && col < n - 1)
                col++;
            else if (s[j] == 'L' && col > 0)
                col--;
            else if (s[j] == 'D' && row < n - 1)
                row++;
            else if (s[j] == 'U' && row > 0)
                row--;
            else
                break;

            count++;
        }
        ans.push_back(count);
    }

    return ans;
}