#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int minDominoRotations(vector<int> &tops, vector<int> &bottoms)
{
    unordered_map<int, int> freq;
    for (int i = 0; i < tops.size(); i++)
    {
        freq[tops[i]]++;
        freq[bottoms[i]]++;
    }

    int candidate = -1;
    for (auto x : freq)
        if (x.second >= tops.size())
            candidate = x.first;

    if (candidate == -1)
        return -1;

    int flipsA = 0, flipsB = 0, countTops = 0, countBottoms = 0;
    for (int i = 0; i < tops.size(); i++)
    {
        if (tops[i] == candidate)
            countTops++;

        if (bottoms[i] == candidate)
            countBottoms++;

        if (tops[i] != candidate && bottoms[i] != candidate)
            return -1;
    }

    for (int i = 0; i < tops.size(); i++)
    {
        if (tops[i] != candidate)
            flipsA++;

        if (bottoms[i] != candidate)
            flipsB++;
    }

    return min(flipsA, flipsB);
}