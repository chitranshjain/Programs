#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        unordered_map<int, int> m;
        for (auto n : nums)
            m[n]++;

        priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > > pq;

        for (auto x : m)
        {
            if (pq.size() < k)
                pq.push(make_pair(x.second, x.first));
            else if (x.second > pq.top().first)
            {
                pq.pop();
                pq.push(make_pair(x.second, x.first));
            }
        }

        vector<int> ans;
        while (!pq.empty())
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }

        return ans;
    }
};