#include <bits/stdc++.h>
using namespace std;

int main()
{
    int grid[3][3];
    bool state[3][3];

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
        {
            cin >> grid[i][j];
            state[i][j] = true;
        }

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
        {
            int numberOfTimes = grid[i][j];
            if (numberOfTimes % 2 == 0)
                continue;
            else
            {
                state[i][j] = !state[i][j];
                if (i > 0)
                    state[i - 1][j] = !state[i-1][j];

                if (j > 0)
                    state[i][j - 1] = !state[i][j-1];

                if (i < 2)
                    state[i + 1][j] = !state[i+1][j];

                if (j < 2)
                    state[i][j + 1] = !state[i][j+1];
            }
        }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            cout << state[i][j];

        cout << endl;
    }
}