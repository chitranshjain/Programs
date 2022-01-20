#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

class Solution
{
public:
    int numJewelsInStones(string jewels, string stones)
    {
        unordered_set<char> jewel;
        for (int i = 0; i < jewels.length(); i++)
        {
            jewel.insert(jewels[i]);
        }

        int numberOfJewels = 0;
        for (int i = 0; i < stones.length(); i++)
        {
            if (jewel.find(stones[i]) != jewel.end())
            {
                numberOfJewels++;
            }
        }

        return numberOfJewels;
    }
};