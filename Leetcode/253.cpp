#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    string destCity(vector<vector<string> > &paths)
    {
        unordered_map<string, string> destMap;

        for (int i = 0; i < paths.size(); i++)
        {
            destMap[paths[i][0]] = paths[i][1];
        }

        for (int i = 0; i < paths.size(); i++)
        {
            if (destMap.find(paths[i][1]) == destMap.end())
                return paths[i][1];
        }

        return "";
    }
};