#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool checkRecord(string s)
    {
        int absent = 0, maxLate = 0, currLate = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'L')
            {
                currLate++;
            }
            else if (s[i] == 'A')
            {
                absent++;
                maxLate = max(maxLate, currLate);
                currLate = 0;
            }
            else
            {
                maxLate = max(maxLate, currLate);
                currLate = 0;
            }
        }

        maxLate = max(maxLate, currLate);

        return absent < 2 && maxLate < 3;
    }
};