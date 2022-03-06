#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

int main()
{
    int n;
    cin >> n;

    unordered_set<char> alpha;

    vector<vector<char> > grid(n, vector<char>(n));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            cin >> grid[i][j];
            alpha.insert(grid[i][j]);
        }

    if (alpha.size() != 2)
        cout << "NO" << endl;
    else
    {
        char diagonal = grid[0][0];
        char other = grid[0][1];
        bool same = true;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == j || j + i == n - 1)
                {
                    if (grid[i][j] != diagonal)
                    {
                        same = false;
                        break;
                    }
                }
                else
                {
                    if (grid[i][j] != other)
                    {
                        same = false;
                        break;
                    }
                }
            }
        }

        if (same)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}