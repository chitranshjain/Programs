#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countBattleships(vector<vector<char> > &board)
    {
        int count = 0;
        for (int i = 0; i < board.size(); i++)
        {
            for (int j = 0; j < board[i].size(); j++)
            {
                if (board[i][j] == 'X')
                    if (i > 0)
                    {
                        if (board[i - 1][j] != 'X')
                            if (j > 0)
                            {
                                if (board[i][j - 1] != 'X')
                                    count++;
                            }
                            else
                                count++;
                    }
                    else
                    {
                        if (j > 0)
                        {
                            if (board[i][j - 1] != 'X')
                                count++;
                        }
                        else
                            count++;
                    }
            }
        }

        return count;
    }
};