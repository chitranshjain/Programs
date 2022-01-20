#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int findCenter(vector<vector<int> > &edges)
{
    unordered_map<int, int> frequencies;

    for (int i = 0; i < edges.size(); i++)
    {
        frequencies[edges[i][0]] = 0;
        frequencies[edges[i][1]] = 0;
    }

    for (int i = 0; i < edges.size(); i++)
    {
        frequencies[edges[i][0]]++;
        frequencies[edges[i][1]]++;
    }

    int maxFreq = INT_MIN, res = -1;

    unordered_map<int, int>::iterator it;

    for (auto x : frequencies)
    {
        if (x.second > maxFreq)
        {
            maxFreq = x.second;
            res = x.first;
        }
    }

    return res;
}