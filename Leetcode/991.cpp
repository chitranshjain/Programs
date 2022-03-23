#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int brokenCalc(int startValue, int target)
    {
        int moves = 0;
        while (target > startValue)
        {
            if (target % 2 == 0)
                target /= 2;
            else
                target++;

            moves++;
        }

        return moves + startValue - target;
    }
};