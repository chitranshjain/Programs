#include <bits/stdc++.h>
using namespace std;

vector<int> memLeak(int memory1, int memory2)
{
    int stick1 = 0, stick2 = 0, timer = 0, currentMemoryNeeded = 1;
    while (true)
    {
        timer++;

        if (memory1 >= memory2)
        {
            if (currentMemoryNeeded > memory1)
                break;
            else
            {
                stick1 = stick1 + currentMemoryNeeded;
                memory1 = memory1 - currentMemoryNeeded;
                currentMemoryNeeded++;
            }
        }
        else
        {
            if (currentMemoryNeeded > memory2)
                break;
            else
            {
                stick2 = stick2 + currentMemoryNeeded;
                memory2 = memory2 - currentMemoryNeeded;
                currentMemoryNeeded++;
            }
        }
    }

    vector<int> ans(3, 0);
    ans[0] = timer;
    ans[1] = memory1;
    ans[2] = memory2;

    return ans;
}