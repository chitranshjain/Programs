#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>
using namespace std;

vector<int> findingUsersActiveMinutes(vector<vector<int> > &logs, int k)
{
    map<int, unordered_set<int> > m;
    for (int i = 0; i < logs.size(); i++)
    {
        int id = logs[i][0], time = logs[i][1];
        m[id].insert(time);
    }

    map<int, int> m2;
    for (auto i : m)
    {
        if (m2.find(i.second.size()) != m2.end())
            m2[i.second.size()]++;
        else
            m2[i.second.size()] = 1;
    }

    vector<int> arr(k);
    for (int i = 0; i < k; i++)
        arr[i] = m2[i + 1];

    return arr;
}