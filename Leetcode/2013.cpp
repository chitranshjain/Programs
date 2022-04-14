#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>
using namespace std;

class Solution
{
public:
    int countPoints(string rings)
    {
        unordered_map<int, unordered_set<int> > m;

        for (int i = 0; i < rings.length(); i += 2)
        {
            char ring = rings[i];
            int rod = rings[i + 1] - '0';

            m[rod].insert(ring);
        }

        int count = 0;
        for (auto x : m)
        {
            if (x.second.size() == 3)
                count++;
        }

        return count;
    }
};