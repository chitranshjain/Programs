#include <bits/stdc++.h>
using namespace std;

vector<vector<int> > groupThePeople(vector<int> &groupSizes)
{
    vector<vector<int> > ans;
    vector<pair<int, int> > groups;

    for (int i = 0; i < groupSizes.size(); i++)
        groups.push_back(make_pair(groupSizes[i], i));

    sort(groups.begin(), groups.end());

    for (int i = 0; i < groups.size();)
    {
        int size = groups[i].first;
        vector<int> v;
        for (int j = 0; j < size; j++)
        {
            v.push_back(groups[i + j].second);
        }
        i = i + size;
        ans.push_back(v);
    }

    return ans;
}