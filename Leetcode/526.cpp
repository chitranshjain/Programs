#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int ans;

    void backtrack(int n, int index, vector<bool> &visited)
    {
        if (index > n)
        {
            ans++;
            return;
        }

        for (int i = 1; i <= n; i++)
        {
            if (!visited[i] && (i % index == 0 || index % i == 0))
            {
                visited[i] = true;
                backtrack(n, index + 1, visited);
                visited[i] = false;
            }
        }
    }

    int countArrangement(int n)
    {
        ans = 0;
        vector<bool> visited(n + 1, false);
        backtrack(n, 1, visited);
        return ans;
    }
};