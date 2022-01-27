#include <bits/stdc++.h>
using namespace std;

int numberOfBeams(vector<string> &bank)
{
    int prev = 0, curr, ans = 0;
    for (int i = 0; i < bank.size(); i++)
    {
        curr = 0;
        for (int j = 0; j < bank[i].length(); j++)
            if (bank[i][j] == '1')
                curr++;

        ans = ans + (prev * curr);
        if (curr != 0)
            prev = curr;
    }

    return ans;
}