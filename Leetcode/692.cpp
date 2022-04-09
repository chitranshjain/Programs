#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

class compare
{
public:
    bool operator()(pair<string, int> &a, pair<string, int> &b)
    {
        if (a.second != b.second)
        {
            return a.second > b.second;
        }

        return a.first < b.first;
    }
};

class Solution
{
public:
    vector<string> topKFrequent(vector<string> &words, int k)
    {
        unordered_map<string, int> m;
        for (auto s : words)
            m[s]++;

        priority_queue<pair<string, int>, vector<pair<string, int> >, compare> pq;

        for (auto x : m)
        {
            pq.push(make_pair(x.first, x.second));

            if (pq.size() > k)
                pq.pop();
        }

        vector<string> answer;
        while (!pq.empty())
        {
            answer.push_back(pq.top().first);
            pq.pop();
        }

        reverse(answer.begin(), answer.end());

        return answer;
    }
};