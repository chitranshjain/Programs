#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int> > validNeighbours(int i, int j, int n, int m)
    {
        vector<vector<int> > neighbours;

        for (int a = -1; a <= 1; a++)
        {
            for (int b = -1; b <= 1; b++)
            {
                if ((i + a >= 0 && i + a < n) && (j + b >= 0 && j + b < m))
                {
                    if (i + a == i && j + b == j)
                        continue;
                    else
                        neighbours.push_back({i + a, j + b});
                }
            }
        }

        return neighbours;
    }

    void gameOfLife(vector<vector<int> > &board)
    {
        int n = board.size(), m = board[0].size();

        vector<vector<int> > board2 = board;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                vector<vector<int> > neighbours = validNeighbours(i, j, n, m);

                int alive = 0;
                for (int k = 0; k < neighbours.size(); k++)
                {
                    if (board[neighbours[k][0]][neighbours[k][1]])
                        alive++;
                }

                if (board[i][j])
                {
                    if (alive < 2 || alive > 3)
                        board2[i][j] = 0;
                }
                else
                {
                    if (alive == 3)
                        board2[i][j] = 1;
                }
            }
        }

        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                board[i][j] = board2[i][j];
    }
};